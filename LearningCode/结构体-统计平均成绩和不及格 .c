#include<stdio.h>

struct student{
    int num;
    char mane[20];
    double score;
};
int main(){
    int i,n,cnt=0;
    double sum=0,average;
    scanf("%d",&n);
    struct student students[n];
    for(i=0;i<n;i++){
        scanf("%d", &students[i].num); 
		scanf("%s", students[i].mane);
		scanf("%lf", &students[i].score);
    }
    for(i=0;i<n;i++){
        sum+=students[i].score;
    }
    average=sum/n;
    for(i=0;i<n;i++){
        if(students[i].score<60){
            cnt++;
        }
    }
    printf("%.2lf %.2lf %d", sum, average, cnt);
    return 0;
}
