#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[16];
    
    
    printf("Please Enter a Password:\n ");
    scanf("%15s",a);
    
    int upperCaseCount=0;
    int upperCaseCount2=0;
    int upperCaseCount3=0;
    int upperCaseCount4=0;
    for(int i=0;i<15; i++){
        upperCaseCount4++;
        if(a[i]>='A'&&a[i]<='Z'){
            upperCaseCount++;
        }
        
        if (a[i]>='a'&&a[i]<='z'){
            upperCaseCount2++;
    }
    if(!(a[i]<='a'&&a[i]>='z')&&!(a[i]<='A'&&a[i]>='Z')){
        upperCaseCount3++;
    }
    }
    
    
if (upperCaseCount>0&&upperCaseCount2>0&&upperCaseCount3>0&&upperCaseCount4>=8){
    printf("いいねいいね, ");
}

else
{
    printf("だめねだめね, ");
}


    return 0;
}
