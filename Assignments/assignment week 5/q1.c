#include <stdio.h>
int main() {
 int age;
printf("enter age");
scanf("%d", &age);

if (age<=12){
printf("the person is a child");
}
else if (age>12 && age<=19){  
    printf("the person is a teenager");
}
else if (age>19 && age<=64){
printf("the person is a adult");
}
else if(age>64){
printf("the person is a senior");
}
return 0;
}