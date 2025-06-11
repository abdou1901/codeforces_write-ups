#include <stdio.h>
#include <stdbool.h>


void solve(){
    int n;
    scanf("%d",&n);
    int arr[n];
    bool all_same = true;
    int first ;
    scanf("%d",&first);
    arr[0] = first;
    int max = first;
    for(int i = 1 ; i <n ; i++){
        scanf("%d",&arr[i]);
        if(arr[i]> max) max = arr[i];
        if(all_same && first != arr[i]) all_same =false; 
    }
    if(all_same) {printf("NO\n");return;}
    printf("YES\n");
    for(int i = 0 ; i < n ;i ++){
        printf("%c ",arr[i] == max ? '1' : '2');
    }
    printf("\n");
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}