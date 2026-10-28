# Competitive programming

My C++ solutions to problems from **Codeforces**, the **CSES Problem Set** and the **AtCoder Educational DP Contest**. Each entry links the problem, the technique used and the solution file; Codeforces problems are sorted by rating (800 → 2800).

- Codeforces: [Art_Gtz](https://codeforces.com/profile/Art_Gtz)
- Language: C++ (GNU C++20)

## Structure

```
codeforces/   75 files (74 problems)
cses/         12 problems
atcoder-dp/   9 problems
```

## Compile and run

```bash
g++ -std=c++20 -O2 -o sol codeforces/4A_Watermelon.cpp
./sol < input.txt
```

## Codeforces

Sorted by rating.

| Problem | Rating | Topic | Solution | Note |
|---|---|---|---|---|
| [4A - Watermelon](https://codeforces.com/problemset/problem/4/A) | 800 | brute force, math | [code](codeforces/4A_Watermelon.cpp) |  |
| [71A - Way Too Long Words](https://codeforces.com/problemset/problem/71/A) | 800 | strings | [code](codeforces/71A_Way_Too_Long_Words.cpp) |  |
| [112A - Petya and Strings](https://codeforces.com/problemset/problem/112/A) | 800 | implementation, strings | [code](codeforces/112A_Petya_and_Strings.cpp) |  |
| [158A - Next Round](https://codeforces.com/problemset/problem/158/A) | 800 | *special, implementation | [code](codeforces/158A_Next_Round.cpp) |  |
| [231A - Team](https://codeforces.com/problemset/problem/231/A) | 800 | brute force, greedy | [code](codeforces/231A_Team.cpp) |  |
| [263A - Beautiful Matrix](https://codeforces.com/problemset/problem/263/A) | 800 | implementation | [code](codeforces/263A_Beautiful_Matrix.cpp) |  |
| [266A - Stones on the Table](https://codeforces.com/problemset/problem/266/A) | 800 | implementation | [code](codeforces/266A_Stones_on_the_Table.cpp) |  |
| [282A - Bit++](https://codeforces.com/problemset/problem/282/A) | 800 | implementation | [code](codeforces/282A_Bitpp.cpp) |  |
| [339A - Helpful Maths](https://codeforces.com/problemset/problem/339/A) | 800 | greedy, implementation, sortings | [code](codeforces/339A_Helpful_Maths.cpp) |  |
| [546A - Soldier and Bananas](https://codeforces.com/problemset/problem/546/A) | 800 | brute force, implementation, math | [code](codeforces/546A_Soldier_and_Bananas.cpp) |  |
| [1352A - Sum of Round Numbers](https://codeforces.com/problemset/problem/1352/A) | 800 | implementation, math | [code](codeforces/1352A_Sum_of_Round_Numbers.cpp) |  |
| [1353B - Two Arrays And Swaps](https://codeforces.com/problemset/problem/1353/B) | 800 | greedy, sortings | [code](codeforces/1353B_Two_Arrays_And_Swaps.cpp) |  |
| [1367B - Even Array](https://codeforces.com/problemset/problem/1367/B) | 800 | greedy, math | [code](codeforces/1367B_Even_Array.cpp) |  |
| [1398A - Bad Triangle](https://codeforces.com/problemset/problem/1398/A) | 800 | geometry, math | [code](codeforces/1398A_Bad_Triangle.cpp) |  |
| [1399A - Remove Smallest](https://codeforces.com/problemset/problem/1399/A) | 800 | greedy, sortings | [code](codeforces/1399A_Remove_Smallest.cpp) |  |
| [1399B - Gifts Fixing](https://codeforces.com/problemset/problem/1399/B) | 800 | greedy | [code](codeforces/1399B_Gifts_Fixing.cpp) |  |
| [1462A - Favorite Sequence](https://codeforces.com/problemset/problem/1462/A) | 800 | implementation, two pointers | [code](codeforces/1462A_Favorite_Sequence.cpp) |  |
| [2225A - A Number Between Two Others](https://codeforces.com/problemset/problem/2225/A) | 800 | greedy, math | [code](codeforces/2225A_A_Number_Between_Two_Others.cpp) |  |
| [2228A - Marisa Steals Reimu's Takeout](https://codeforces.com/problemset/problem/2228/A) | 800 | greedy, implementation | [code](codeforces/2228A_Marisa_Steals_Reimus_Takeout.cpp) | Live-contest code |
| [2229A - Slimes on a Line](https://codeforces.com/problemset/problem/2229/A) | 800 | brute force, greedy, math | [code](codeforces/2229A_Slimes_on_a_Line.cpp) |  |
| [2229B - Absolute Cinema](https://codeforces.com/problemset/problem/2229/B) | 800 | greedy, math | [code](codeforces/2229B_Absolute_Cinema.cpp) |  |
| [2230A - Optimal Purchase](https://codeforces.com/problemset/problem/2230/A) | 800 | implementation, math | [code](codeforces/2230A_Optimal_Purchase.cpp) |  |
| [2231A - Construct an Array](https://codeforces.com/problemset/problem/2231/A) | 800 | constructive algorithms | [code](codeforces/2231A_Construct_an_Array.cpp) |  |
| [96A - Football](https://codeforces.com/problemset/problem/96/A) | 900 | implementation, strings | [code](codeforces/96A_Football.cpp) |  |
| [115A - Party](https://codeforces.com/problemset/problem/115/A) | 900 | DFS | [code](codeforces/115A_Party.cpp) |  |
| [115A - Party](https://codeforces.com/problemset/problem/115/A) | 900 | DFS | [code](codeforces/115A_Party_sin_lambda.cpp) | Alternative version without lambda |
| [1324A - Yet Another Tetris Problem](https://codeforces.com/problemset/problem/1324/A) | 900 | implementation, number theory | [code](codeforces/1324A_Yet_Another_Tetris_Problem.cpp) |  |
| [1462C - Unique Number](https://codeforces.com/problemset/problem/1462/C) | 900 | brute force, greedy, math | [code](codeforces/1462C_Unique_Number.cpp) |  |
| [2229C1 - We Be Flipping (Easy Version)](https://codeforces.com/problemset/problem/2229/C1) | 900 | constructive algorithms, greedy | [code](codeforces/2229C1_We_Be_Flipping_Easy_Version.cpp) |  |
| [1A - Theatre Square](https://codeforces.com/problemset/problem/1/A) | 1000 | math | [code](codeforces/1A_Theatre_Square.cpp) |  |
| [69A - Young Physicist](https://codeforces.com/problemset/problem/69/A) | 1000 | implementation, math | [code](codeforces/69A_Young_Physicist.cpp) |  |
| [230A - Dragons](https://codeforces.com/problemset/problem/230/A) | 1000 | greedy, sortings | [code](codeforces/230A_Dragons.cpp) |  |
| [1374C - Move Brackets](https://codeforces.com/problemset/problem/1374/C) | 1000 | greedy, strings | [code](codeforces/1374C_Move_Brackets.cpp) |  |
| [2194B - Offshores](https://codeforces.com/problemset/problem/2194/B) | 1000 | greedy, implementation, math | [code](codeforces/2194B_Offshores.cpp) |  |
| [2237C - Duck Surplus](https://codeforces.com/problemset/problem/2237/C) | 1000 | binary search, greedy | [code](codeforces/2237C_Duck_Surplus.cpp) |  |
| [706B - Interesting drink](https://codeforces.com/problemset/problem/706/B) | 1100 | binary search, dp, implementation | [code](codeforces/706B_Interesting_drink.cpp) |  |
| [1324B - Yet Another Palindrome Problem](https://codeforces.com/problemset/problem/1324/B) | 1100 | brute force, strings | [code](codeforces/1324B_Yet_Another_Palindrome_Problem.cpp) |  |
| [1366A - Shovels and Swords](https://codeforces.com/problemset/problem/1366/A) | 1100 | binary search, greedy, math | [code](codeforces/1366A_Shovels_and_Swords.cpp) |  |
| [2228B - Remilia Plays Soku](https://codeforces.com/problemset/problem/2228/B) | 1100 | games, implementation | [code](codeforces/2228B_Remilia_Plays_Soku.cpp) | Live-contest code |
| [2231B - Another Sorting Problem](https://codeforces.com/problemset/problem/2231/B) | 1100 | constructive algorithms | [code](codeforces/2231B_Another_Sorting_Problem.cpp) |  |
| [6C - Alice, Bob and Chocolate](https://codeforces.com/problemset/problem/6/C) | 1200 | greedy, two pointers | [code](codeforces/6C_Alice_Bob_and_Chocolate.cpp) |  |
| [489B - BerSU Ball](https://codeforces.com/problemset/problem/489/B) | 1200 | Two pointers + greedy | [code](codeforces/489B_BerSU_Ball.cpp) |  |
| [492B - Vanya and Lanterns](https://codeforces.com/problemset/problem/492/B) | 1200 | binary search, implementation, math | [code](codeforces/492B_Vanya_and_Lanterns.cpp) |  |
| [1352B - Same Parity Summands](https://codeforces.com/problemset/problem/1352/B) | 1200 | constructive algorithms, math | [code](codeforces/1352B_Same_Parity_Summands.cpp) |  |
| [1352C - K-th Not Divisible by n](https://codeforces.com/problemset/problem/1352/C) | 1200 | binary search, math | [code](codeforces/1352C_K-th_Not_Divisible_by_n.cpp) |  |
| [1385C - Make It Good](https://codeforces.com/problemset/problem/1385/C) | 1200 | Observation + greedy | [code](codeforces/1385C_Make_It_Good.cpp) |  |
| [1399C - Boats Competition](https://codeforces.com/problemset/problem/1399/C) | 1200 | Brute force + counting | [code](codeforces/1399C_Boats_Competition.cpp) |  |
| [1669G - Fall Down](https://codeforces.com/problemset/problem/1669/G) | 1200 | Column-wise simulation | [code](codeforces/1669G_Fall_Down.cpp) |  |
| [189A - Cut Ribbon](https://codeforces.com/problemset/problem/189/A) | 1300 | Unbounded knapsack | [code](codeforces/189A_Cut_Ribbon.cpp) |  |
| [1360E - Polygon](https://codeforces.com/problemset/problem/1360/E) | 1300 | Grid observation | [code](codeforces/1360E_Polygon.cpp) |  |
| [1367C - Social Distance](https://codeforces.com/problemset/problem/1367/C) | 1300 | Greedy with constraints | [code](codeforces/1367C_Social_Distance.cpp) |  |
| [2230C - Arrange the Numbers in a Circle](https://codeforces.com/problemset/problem/2230/C) | 1300 | constructive algorithms, implementation, math | [code](codeforces/2230C_Arrange_the_Numbers_in_a_Circle.cpp) |  |
| [277A - Learning Languages](https://codeforces.com/problemset/problem/277/A) | 1400 | Union-Find | [code](codeforces/277A_Learning_Languages.cpp) |  |
| [279B - Books](https://codeforces.com/problemset/problem/279/B) | 1400 | Two pointers | [code](codeforces/279B_Books.cpp) |  |
| [1195C - Basketball Exercise](https://codeforces.com/problemset/problem/1195/C) | 1400 | Two-row DP | [code](codeforces/1195C_Basketball_Exercise.cpp) |  |
| [1201C - Maximum Median](https://codeforces.com/problemset/problem/1201/C) | 1400 | Sort + binary search on the answer | [code](codeforces/1201C_Maximum_Median.cpp) |  |
| [1324D - Pair of Topics](https://codeforces.com/problemset/problem/1324/D) | 1400 | Sort + binary search | [code](codeforces/1324D_Pair_of_Topics.cpp) |  |
| [1374D - Zero Remainder Array](https://codeforces.com/problemset/problem/1374/D) | 1400 | Map + greedy | [code](codeforces/1374D_Zero_Remainder_Array.cpp) |  |
| [2229C2 - We Be Flipping (Hard Version)](https://codeforces.com/problemset/problem/2229/C2) | 1400 | constructive algorithms, dp, greedy | [code](codeforces/2229C2_We_Be_Flipping_Hard_Version.cpp) |  |
| [2231C - Chipmunk Theo and Equality](https://codeforces.com/problemset/problem/2231/C) | 1400 | implementation, sortings | [code](codeforces/2231C_Chipmunk_Theo_and_Equality.cpp) |  |
| [455A - Boredom](https://codeforces.com/problemset/problem/455/A) | 1500 | dp | [code](codeforces/455A_Boredom.cpp) |  |
| [580B - Kefa and Company](https://codeforces.com/problemset/problem/580/B) | 1500 | Sort + sliding window | [code](codeforces/580B_Kefa_and_Company.cpp) |  |
| [580C - Kefa and Park](https://codeforces.com/problemset/problem/580/C) | 1500 | dfs and similar, graphs, trees | [code](codeforces/580C_Kefa_and_Park.cpp) |  |
| [1296C - Yet Another Walking Robot](https://codeforces.com/problemset/problem/1296/C) | 1500 | Hash map + prefix sums | [code](codeforces/1296C_Yet_Another_Walking_Robot.cpp) |  |
| [2228C1 - Cirno and Number (Easy Version)](https://codeforces.com/problemset/problem/2228/C1) | 1500 | binary search, brute force, dp | [code](codeforces/2228C1_Cirno_and_Number_Easy_Version.cpp) | Live-contest code |
| [343B - Alternating Current](https://codeforces.com/problemset/problem/343/B) | 1600 | Stack matching | [code](codeforces/343B_Alternating_Current.cpp) |  |
| [1175B - Catch Overflow!](https://codeforces.com/problemset/problem/1175/B) | 1600 | Stack + recursion | [code](codeforces/1175B_Catch_Overflow.cpp) |  |
| [1353D - Constructing the Array](https://codeforces.com/problemset/problem/1353/D) | 1600 | Priority queue greedy | [code](codeforces/1353D_Constructing_the_Array.cpp) |  |
| [2224D - Zhily and Barknights](https://codeforces.com/problemset/problem/2224/D) | 1600 | binary search, data structures, math | [code](codeforces/2224D_Zhily_and_Barknights.cpp) | Attempt (WA/TLE on CF) |
| [474D - Flowers](https://codeforces.com/problemset/problem/474/D) | 1700 | dp | [code](codeforces/474D_Flowers.cpp) |  |
| [1343D - Constant Palindrome Sum](https://codeforces.com/problemset/problem/1343/D) | 1700 | Sweep line + greedy | [code](codeforces/1343D_Constant_Palindrome_Sum.cpp) |  |
| [2227F - It Just Keeps Going Sideways](https://codeforces.com/problemset/problem/2227/F) | 1700 | binary search, data structures, dp | [code](codeforces/2227F_It_Just_Keeps_Going_Sideways.cpp) |  |
| [1437C - Chef Monocarp](https://codeforces.com/problemset/problem/1437/C) | 1800 | Assignment DP | [code](codeforces/1437C_Chef_Monocarp.cpp) |  |
| [1475D - Cleaning the Phone](https://codeforces.com/problemset/problem/1475/D) | 1800 | Prefix sums + two pointers | [code](codeforces/1475D_Cleaning_the_Phone.cpp) |  |
| [325E - The Red Button](https://codeforces.com/problemset/problem/325/E) | 2800 | combinatorics, dfs and similar, dsu | [code](codeforces/325E_The_Red_Button.cpp) |  |

## CSES Problem Set

| Problem | Topic | Solution |
|---|---|---|
| [Apartments](https://cses.fi/problemset/task/1084) | Two pointers | [code](cses/1084_Apartments.cpp) |
| [Array Description](https://cses.fi/problemset/task/1746) | DP with constraints | [code](cses/1746_Array_Description.cpp) |
| [Coin Combinations I](https://cses.fi/problemset/task/1635) | Counting DP | [code](cses/1635_Coin_Combinations_I.cpp) |
| [Concert Tickets](https://cses.fi/problemset/task/1091) | Multiset | [code](cses/1091_Concert_Tickets.cpp) |
| [Dice Combinations](https://cses.fi/problemset/task/1633) | Linear DP | [code](cses/1633_Dice_Combinations.cpp) |
| [Edit Distance](https://cses.fi/problemset/task/1639) | String DP | [code](cses/1639_Edit_Distance.cpp) |
| [Ferris Wheel](https://cses.fi/problemset/task/1090) | Two pointers + greedy | [code](cses/1090_Ferris_Wheel.cpp) |
| [Increasing Subsequence](https://cses.fi/problemset/task/1145) | LIS O(n log n) | [code](cses/1145_Increasing_Subsequence.cpp) |
| [Removal Game](https://cses.fi/problemset/task/1097) | Interval DP | [code](cses/1097_Removal_Game.cpp) |
| [Restaurant Customers](https://cses.fi/problemset/task/1619) | Event processing | [code](cses/1619_Restaurant_Customers.cpp) |
| [Sum of Two Values](https://cses.fi/problemset/task/1640) | Hash map | [code](cses/1640_Sum_of_Two_Values.cpp) |
| [Towers](https://cses.fi/problemset/task/1073) | Multiset greedy | [code](cses/1073_Towers.cpp) |

## AtCoder Educational DP Contest

| Problem | Topic | Solution |
|---|---|---|
| [A - Frog 1](https://atcoder.jp/contests/dp/tasks/dp_a) | Linear DP | [code](atcoder-dp/A_Frog_1.cpp) |
| [B - Frog 2](https://atcoder.jp/contests/dp/tasks/dp_b) | DP with k jumps | [code](atcoder-dp/B_Frog_2.cpp) |
| [C - Vacation](https://atcoder.jp/contests/dp/tasks/dp_c) | State DP | [code](atcoder-dp/C_Vacation.cpp) |
| [D - Knapsack 1](https://atcoder.jp/contests/dp/tasks/dp_d) | Knapsack 0/1 | [code](atcoder-dp/D_Knapsack_1.cpp) |
| [E - Knapsack 2](https://atcoder.jp/contests/dp/tasks/dp_e) | Knapsack by value | [code](atcoder-dp/E_Knapsack_2.cpp) |
| [F - LCS](https://atcoder.jp/contests/dp/tasks/dp_f) | LCS + reconstruction | [code](atcoder-dp/F_LCS.cpp) |
| [H - Grid 1](https://atcoder.jp/contests/dp/tasks/dp_h) | Grid DP | [code](atcoder-dp/H_Grid_1.cpp) |
| [I - Coins](https://atcoder.jp/contests/dp/tasks/dp_i) | Probability DP | [code](atcoder-dp/I_Coins.cpp) |
| [J - Sushi](https://atcoder.jp/contests/dp/tasks/dp_j) | Expected-value DP | [code](atcoder-dp/J_Sushi.cpp) |
