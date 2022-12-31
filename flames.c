#include<stdio.h>
#include<windows.h>
main(){
    char namex[50];
    char namey[50];
    char common[50],common_no_rep[50];
    int n1=0,n2=0,k=0,rep=0,l=0;
    char choice='Y';
    printf("*This is just for fun,negative result doesn't mean you should stop crushing on them*   ;)\n");
    printf("___________________________FLAMES______________________________________________________________________\n");
while(choice=='Y'||choice=='y'){
    //start: getting names
    char c='`';
    printf("Enter your name :");
    while(c!='\n'){
        scanf("%c",&c);
        namex[n1]=c;
        n1++;
    }
    c='`';
    printf("Enter your crush's name :");
    while(c!='\n'){
        scanf("%c",&c);
        namey[n2]=c;
        n2++;
    }
    //end: getting names
    char name1[50],name2[50];
    int x=0,y=0;
    //start: removal of spaces
    for(int i=0;i<n1;i++){
        if(namex[i]!=' '){
            name1[x]=namex[i];
            x++;
        }
    }
    for(int i=0;i<n2;i++){
        if(namey[i]!=' '){
            name2[y]=namey[i];
            y++;
        }
    }
    //end: removal of spaces

    //start: uppercase to lowercase
    for(int f=0;f<x;f++){
        if(name1[f]<97){
            name1[f]=name1[f]+32;
        }
    }
    x--;
    for(int f=0;f<y;f++){
        if(name2[f]<97){
            name2[f]=name2[f]+32;
        }
    }
    y--;

    //start: getting number of uncommon letters
    int v=0;
    while(v==0){
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(name1[i]==name2[j]){
                for(int a=i;a<=x;a++){
                    name1[a]=name1[a+1];
                }
                x--;
                for(int b=j;b<=y;b++){
                    name2[b]=name2[b+1];
                }
                y--;
            }
        }
    }
    int same=0;
    for(int q=0;q<x;q++){
        for(int w=0;w<y;w++){
            if(name1[q]==name2[w]){
                same=same+1;
            }
        }
    }
    if(same==0){
        break;
    }
}
//end: getting number of uncommon letters

//start: flames
int n=x+y;
char flames[]={'f','l','a','m','e','s'};
char flames1[10];
    for(int m=0;m<6;m++){
            flames1[m]=flames[m];
        }
    int i,a;
    int s=6;
    while(s!=1){
        for(i=0;i<s;i++){
            if(n%s==0)
                a=s-1;
            else
                a=n%s-1;
            if(i==a){
                for(int j=1;j<s;j++){
                        if(i+j<s)
                        flames1[j-1]=flames[i+j];
                        else
                        flames1[j-1]=flames[(i+j)-s];
                }
                s--;
                if(s!=6){
                    for(int m=0;m<6;m++){
                        flames[m]=flames1[m];
                        }
                    }
                }
            }
        }
      //end: flames
      switch(flames1[0]){
        case 'f':
            printf("------\"Friends\"------");
            break;
        case 'l':
            printf("------\"Lover\"------");
            break;
        case 'a':
            printf("------\"Affection\"------");
            break;
        case 'm':
            printf("------\"Marriage\"------");
            break;
        case 'e':
            printf("------\"Enemy\"------");
            break;
        case 's':
            printf("------\"Sibling\"------");
            break;
      }
    printf("\nDo you want to get flames again? Type 'Y'/'N' :");
    scanf("%c",&choice);
    fflush(stdin);
    }   //end of while
    printf("Thanks for using Flames, Have a great day!\n");
    printf("Program will close shortly......");
    Sleep(5000);
}
