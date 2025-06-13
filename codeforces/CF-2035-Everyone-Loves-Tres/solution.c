#include <stdio.h>
#include<stdbool.h>

/*
B. Everyone Loves Tres
time limit per test1 second
memory limit per test256 megabytes
There are 3 heroes and 3 villains, so 6 people in total.
Given a positive integer n
. Find the smallest integer whose decimal representation has length n
 and consists only of 3
s and 6
s such that it is divisible by both 33
 and 66
. If no such integer exists, print −1
.

Input
The first line contains a single integer t
 (1≤t≤500
) — the number of test cases.

The only line of each test case contains a single integer n
 (1≤n≤500
) — the length of the decimal representation.

Output
For each test case, output the smallest required integer if such an integer exists and −1
 otherwise.

Example
InputCopy
6
1
2
3
4
5
7
OutputCopy
-1
66
-1
3366
36366
3336366
Note
For n=1
, no such integer exists as neither 3
 nor 6
 is divisible by 33
.

For n=2
, 66
 consists only of 6
s and it is divisible by both 33
 and 66
.

For n=3
, no such integer exists. Only 363
 is divisible by 33
, but it is not divisible by 66
.

For n=4
, 3366
 and 6666
 are divisible by both 33
 and 66
, and 3366
 is the smallest.

*/

void solve(){
    int n;
    scanf("%d",&n);
    if(n==1 ||n == 3) {
        printf("-1\n");
        return;
    }
    if(n%2 ==0){
        for(int i = 0 ; i < n-2 ; i++){
            printf("3");
        }
        printf("66\n");
    }else {
        for(int i = 0 ; i < n-5 ; i++){
            printf("3");
        }
        printf("36366\n");
    }
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--) solve();
    return 0;
}