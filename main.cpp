#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <stack> // TODO: Replace with your own stack implementation defined in 'stack.h'

static size_t room_coords(long long x, long long y, size_t width)
{
    return (1 + static_cast<size_t>(y) * 2) * (1 + width * 2) + (1 + static_cast<size_t>(x) * 2);
}

static size_t room_wall_coords(size_t x, size_t y, size_t maze_width_with_walls)
{
    return y * maze_width_with_walls + x;
}

static std::vector<uint8_t> generate_maze(size_t maze_width, size_t maze_height)
{
    size_t maze_width_with_walls  = 1 + maze_width  * 2;
    size_t maze_height_with_walls = 1 + maze_height * 2;

    std::vector<uint8_t> maze;
    try {
        maze.resize(maze_height_with_walls * maze_width_with_walls, 1);
    } catch (const std::bad_alloc &e) {
        throw std::invalid_argument("Failed to allocate memory to store the maze.");
    }
    long long neighbour_dx[] = { 0, 1, 0, -1 };
    long long neighbour_dy[] = { -1, 0, 1, 0 };
    long long next_room_x = 0, next_room_y = 0;

    // TODO: Replace with your own stack implementation in namespace 'my' from 'stack.h'
    std::stack<long long> backtrack;
    backtrack.push(next_room_x);
    backtrack.push(next_room_y);
    maze[room_coords(next_room_x, next_room_y, maze_width)] = 0;
    while (!backtrack.empty()) {
        long long room_y = backtrack.top();
        backtrack.pop();
        long long room_x = backtrack.top();
        backtrack.pop();

        long long unvisited_dx[4];
        long long unvisited_dy[4];
        size_t unvisited = 0;
        for (size_t i = 0; i < 4; ++i) {
            next_room_x = room_x + neighbour_dx[i];
            next_room_y = room_y + neighbour_dy[i];
            if (next_room_x >= 0 && next_room_x < static_cast<long long>(maze_width)  &&
                next_room_y >= 0 && next_room_y < static_cast<long long>(maze_height) &&
                    maze[room_coords(next_room_x, next_room_y, maze_width)] != 0) {
                unvisited_dx[unvisited] = neighbour_dx[i];
                unvisited_dy[unvisited] = neighbour_dy[i];
                ++unvisited;
            }
        }

        if (unvisited > 0) {
            backtrack.push(room_x);
            backtrack.push(room_y);

            size_t i = rand() % unvisited; // NOLINT(cert-msc50-cpp)
            next_room_x = room_x + unvisited_dx[i];
            next_room_y = room_y + unvisited_dy[i];

            backtrack.push(next_room_x);
            backtrack.push(next_room_y);
            maze[room_coords(next_room_x, next_room_y, maze_width)] = 0;

            auto wall_to_break_x = static_cast<size_t>((1 + room_x * 2) + unvisited_dx[i]);
            auto wall_to_break_y = static_cast<size_t>((1 + room_y * 2) + unvisited_dy[i]);
            maze[room_wall_coords(wall_to_break_x, wall_to_break_y, maze_width_with_walls)] = 0;
        }
    }

    return maze;
}

int main(int argc, char *argv[])
{
    using namespace std;

    int status = EXIT_SUCCESS;
    try {
        if (argc != 3) {
            throw invalid_argument(
                "Invalid number of arguments.\n\n"
                "Usage:\n"
                "maze <number of rooms on each row> <number of rooms on each column>\n"
            );
        }

        size_t maze_width;
        try {
            maze_width = static_cast<size_t>(stoull(argv[1]));
        } catch (const logic_error &e) {
            throw invalid_argument("The width of the maze is not a valid number.");
        }
        if (maze_width == 0 || maze_width > 16384) {
            throw invalid_argument("The width of the maze must be greater than 0 and can not be greater than 16384.");
        }
        size_t maze_width_with_walls = 1 + maze_width * 2;

        size_t maze_height;
        try {
            maze_height = static_cast<size_t>(stoull(argv[2]));
        } catch (const logic_error &e) {
            throw invalid_argument("The height of the maze is not a valid number.");
        }
        if (maze_height == 0 || maze_height > 16384) {
            throw invalid_argument("The height of the maze must be greater than 0 and can not be greater than 16384.");
        }
        size_t maze_height_with_walls = 1 + maze_height * 2;

        // Set the `rand` function's seed to 42 to ensure GitHub Actions can verify your code.
        srand(42); // NOLINT(cert-msc51-cpp)

        auto maze = generate_maze(maze_width, maze_height);

        cout << "P1\n"
             << maze_width_with_walls << " " << maze_height_with_walls << "\n";
        for (size_t y = 0; y < maze_height_with_walls; ++y) {
            for (size_t x = 0; x < maze_width_with_walls; ++x) {
                cout << static_cast<int>(maze[room_wall_coords(x, y, maze_width_with_walls)]) << " ";
            }
            cout << "\n";
        }
    } catch (const exception &e) {
        cerr << "Error: " << e.what() << "\n";
        status = EXIT_FAILURE;
    }

    return status;
}
