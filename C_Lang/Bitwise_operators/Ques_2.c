/*
* Clearing the nth bit of a number
*/

int clearBit(int n, int pos){
    int mask = ~(1<<pos);
    return n & mask;
}

int main()
{
    int n, pos;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter the position:");
    scanf("%d",&pos);
    printf("The number after clearing the bit is %d\n", clearBit(n, pos));
    
    return 0;
}