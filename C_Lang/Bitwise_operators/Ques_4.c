/*
*Implement a function to count the number of set bits in an integer
*/

// int countSetBits(int n){
//     int count = 0;
//     while(n){
//         n = n & (n-1);
//         count++;
//     }
//     return count;
// }

int countsetBits(int n){
    int count = 0;
    while(n){
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The number of set bits in the number is %d\n", countSetBits(n));
    
    return 0;
}