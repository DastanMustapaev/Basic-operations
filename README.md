A. Binary Operations
Given two integers 𝑎 and 𝑏.
Output on separate lines:
the sum of 𝑎 and 𝑏;
the absolute value of the difference between 𝑎 and 𝑏;
the product of 𝑎 and 𝑏.
Input
The first line contains an integer 𝑎 (−109≤𝑎≤109).
The second line contains an integer 𝑏 (−109≤𝑏≤109).
Output
Output the results of the operations described in the statement on separate lines.
Examples
InputCopy
15
2
OutputCopy
17
13
30
InputCopy
-3
7
OutputCopy
4
10
-21

B. Difference of Powers
Given two integers 𝑎 and 𝑏.
Output a single line containing the difference between 𝑎𝑏 and 𝑏𝑎.
Input
The first line contains an integer 𝑎 (0≤𝑎≤15).
The second line contains an integer 𝑏 (0≤𝑏≤15).
Output
In a single line, output an integer — the difference between the values of 𝑎𝑏 and 𝑏𝑎.
Examples
InputCopy
15
2
OutputCopy
-32543
InputCopy
3
7
OutputCopy
1844

C. Square Root
Given an integer a.
Find an integer b such that b2 ≤ a < (b + 1)2.
Input
The input consists of a single line containing the integer a (1 ≤ a ≤ 109).
Output
Output a single integer b.
Examples
InputCopy
5
OutputCopy
2
InputCopy
32
OutputCopy
5

D. Best Ratio
In the process of studying the history of culture, you read about the ratio known as the "golden section".
Essentially, the golden section 𝜙=1+5√2 is the "optimal" ratio of the height to the width of the entire picture or a part of it.
You believe that this ratio is outdated and does not meet modern standards, so you have devised the "platinum ratio" 𝑎+𝑏√𝑐.
First, you need to derive the decimal representation of this ratio.
Input
The first line contains an integer 𝑎 (1≤𝑎≤106).
The second line contains an integer 𝑏 (1≤𝑏≤106).
The third line contains an integer 𝑐 (1≤𝑐≤106).
Output
Output a single real number — the decimal representation of the ratio 𝑎+𝑏√𝑐.
The answer will be considered correct if the absolute or relative error does not exceed 10−4.
Examples
InputCopy
15
2
3
OutputCopy
5.4714
InputCopy
3
2
15
OutputCopy
0.294281

E. Seconds
Given the number of seconds 𝑇.
Calculate how many in 𝑇:
full days 𝑑;
full hours in an incomplete day ℎ;
full minutes in an incomplete hour 𝑚;
full seconds in an incomplete minute 𝑠.
Input
A single line contains an integer 𝑇 (0≤𝑇≤1018)  — the total number of seconds.
Output
In a single line, output four integers 𝑑, ℎ, 𝑚, and 𝑠 separated by spaces — the quantities specified in the problem statement.
Examples
InputCopy
4321
OutputCopy
0 1 12 1
InputCopy
86399
OutputCopy
0 23 59 59
InputCopy
86400
OutputCopy
1 0 0 0
InputCopy
123456
OutputCopy
1 10 17 36
InputCopy
123456789
OutputCopy
1428 21 33 9
InputCopy
12345678912345678
OutputCopy
142889802226 5 21 18
Note
First test example 4321 seconds is 0 days, 1 hour, 12 minutes, and 1 second.

F. Time
You are given four integers:
the number of full days 𝑑;
the number of full hours in the incomplete day ℎ;
the number of full minutes in the incomplete hour 𝑚;
the number of full seconds in the incomplete minute 𝑠.
Calculate how many total seconds are in the given amount of time.
Input
A single line contains four integers 𝑑, ℎ, 𝑚, and 𝑠 separated by spaces (0≤𝑑≤2⋅1013;0≤ℎ<24;0≤𝑚,𝑠<60) — the quantities specified in the problem statement.
It is guaranteed that the answer for the given values of 𝑑,ℎ,𝑚,𝑠 does not exceed 1018.
Output
In a single line, output the integer 𝑇 (0≤𝑇≤1018)  — the total number of seconds.
Examples
InputCopy
0 1 12 1
OutputCopy
4321
InputCopy
0 23 59 59
OutputCopy
86399
InputCopy
1 0 0 0
OutputCopy
86400
InputCopy
1 10 17 36
OutputCopy
123456
InputCopy
1428 21 33 9
OutputCopy
123456789
InputCopy
142889802226 5 21 18
OutputCopy
12345678912345678
Note
First test case 0 days, 1 hour, 12 minutes, and 1 second — this totals to 4321 seconds.

G. Surface Area
You found a brick.
Not just any brick: you found THE BRICK!
The brick you found was so perfect that you decided to coat it with varnish and keep it as a souvenir.
You measured the brick and found its dimensions: 𝑎
 centimeters in width, 𝑏
 centimeters in length, and 𝑐
 centimeters in height.
Now you are curious — what is the total surface area of the brick that will be covered with varnish?
Input
The input consists of a single line containing three integers 𝑎, 𝑏, and 𝑐 (1≤𝑎,𝑏,𝑐≤106) — the width, length, and height of the brick, respectively.
OutputOutput a single integer 𝑆 (1≤𝑆≤1018) — the total surface area of the brick.
Examples
InputCopy
2 1 3
OutputCopy
22
InputCopy
42 42 42
OutputCopy
10584
InputCopy
534 21 7896
OutputCopy
8786988

H. Celsius or Fahrenheit?
You looked at the outdoor thermometer and saw that it shows a temperature of 𝑇.
There is only one problem — you do not know the scale of the thermometer (Celsius or Fahrenheit).
To be on the safe side, you decided to consider two cases:
If 𝑇 is measured in Celsius, what is the temperature in Fahrenheit?
If 𝑇 is measured in Fahrenheit, what is the temperature in Celsius?
Unfortunately, you only remember the formula for converting from Celsius to Fahrenheit:𝐹=𝐶⋅95+32, where 𝐶 is the temperature in Celsius, and 𝐹 is the temperature in Fahrenheit.
Input
The input consists of a single line containing an integer 𝑇(−103≤𝑇≤103) — the reading of the thermometer.
Output
In the first line, output a real number 𝐹 — the temperature in Fahrenheit if 𝑇 was measured in Celsius.
In the second line, output a real number 𝐶 — the temperature in Celsius if 𝑇 was measured in Fahrenheit.
The answer will be considered correct if the absolute or relative error does not exceed 10−9.
Examples
InputCopy
0
OutputCopy
32.0
-17.777777777778
InputCopy
-32
OutputCopy
-25.6
-35.555555555556
InputCopy
32
OutputCopy
89.6
0.000000000000
InputCopy
-99
OutputCopy
-146.2
-72.777777777778
InputCopy
100
OutputCopy
212.0
37.777777777778
InputCopy
451
OutputCopy
843.8
232.777777777778
Note
Fahrenheit 451
