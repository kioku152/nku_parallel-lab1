#include <iostream>
#include<windows.h>

using namespace std;


void run1(int i){
    long long head, tail, freq;

    int n=i;
    float sum=0.0;
    float* a=new float[n];

    for (int i = 0; i < n; i++) {
        a[i] = i;
    }


    int count1=0;

    QueryPerformanceFrequency((LARGE_INTEGER*)&freq);

    QueryPerformanceCounter((LARGE_INTEGER*)&head);
    do {

    count1++;
    sum=0.0;
    for (int i = 0; i < n; i++)
        sum+=a[i];


    QueryPerformanceCounter((LARGE_INTEGER*)&tail);
    //cout << "time:" << (tail - head) * 1000.0 / freq << "ms" << endl;


    } while ((tail - head) * 1000.0 / freq < 500);



     //cout<<"range=";
    cout<<n<<endl;
    //cout << "sum_time:" ;
    cout<< (tail - head) * 1000.0 / freq << endl<<count1<<endl;

    delete a;
}
void run_pro(int i){
    long long head, tail, freq;

    int n=i;
    float sum1=0.0,sum2=0.0,sum=0.0;
    float* a=new float[n];

    for (int i = 0; i < n; i++) {
        a[i] = i;
    }


    int count1=0;

    QueryPerformanceFrequency((LARGE_INTEGER*)&freq);

    QueryPerformanceCounter((LARGE_INTEGER*)&head);
    do {

    count1++;
    sum=0.0;
    sum1=0.0;
    sum2=0.0;
    for (int i = 0; i < n; i+=2){
        sum1+=a[i];
        sum2+=a[i+1];
    }

    sum=sum1+sum2;

    QueryPerformanceCounter((LARGE_INTEGER*)&tail);
    //cout << "time:" << (tail - head) * 1000.0 / freq << "ms" << endl;


    } while ((tail - head) * 1000.0 / freq < 500);



     //cout<<"range=";
    cout<<n<<endl;
    //cout << "sum_pro_time:" ;
    cout<< (tail - head) * 1000.0 / freq  << endl<<count1<<endl;

    delete a;
}
void sum0(int n,float* a){
    if(n==1)
        return;
    else
    {
        for(int i=0;i<n;i++)
            a[i]+=a[n-i-1];
        sum0(n/2,a);
    }
}
void run_pro1(int i){
    long long head, tail, freq;

    int n=i;
    float sum=0.0;
    float* a=new float[n];

    for (int i = 0; i < n; i++) {
        a[i] = i;
    }


    int count1=0;

    QueryPerformanceFrequency((LARGE_INTEGER*)&freq);

    QueryPerformanceCounter((LARGE_INTEGER*)&head);
    do {

    count1++;

    sum0(n,a);



    QueryPerformanceCounter((LARGE_INTEGER*)&tail);
    //cout << "time:" << (tail - head) * 1000.0 / freq << "ms" << endl;


    } while ((tail - head) * 1000.0 / freq < 500);



     //cout<<"range=";
    cout<<n<<endl;
    //cout << "sum_pro1_time:" ;
    cout<< (tail - head) * 1000.0 / freq << endl<<count1<<endl;

    delete a;
}
void run_pro2(int i){
    long long head, tail, freq;

    int n=i;
    float sum=0.0;
    float* a=new float[n];

    for (int i = 0; i < n; i++) {
        a[i] = i;
    }


    int count1=0;

    QueryPerformanceFrequency((LARGE_INTEGER*)&freq);

    QueryPerformanceCounter((LARGE_INTEGER*)&head);
    do {

    count1++;

    for(int m=n;m>1;m/=2)
        for(int i=0;i<m/2;i++)
            a[i]=a[i*2]+a[i*2+1];


    QueryPerformanceCounter((LARGE_INTEGER*)&tail);
    //cout << "time:" << (tail - head) * 1000.0 / freq << "ms" << endl;


    } while ((tail - head) * 1000.0 / freq < 500);



     //cout<<"range=";
    cout<<n<<endl;
    //cout << "sum_pro2_time:" ;
    cout<< (tail - head) * 1000.0 / freq << endl<<count1<<endl;

    delete a;
}
void run_pro_3(int i){
    long long head, tail, freq;

    int n=i;
    float sum1=0.0,sum2=0.0,sum3=0.0;
    float sum=0.0;
    float* a=new float[n];

    for (int i = 0; i < n; i++) {
        a[i] = i;
    }


    int count1=0;

    QueryPerformanceFrequency((LARGE_INTEGER*)&freq);

    QueryPerformanceCounter((LARGE_INTEGER*)&head);
    do {

    count1++;
    sum=0.0;
    sum1=0.0;
    sum2=0.0;
    sum3=0.0;
    for (int i = 0; i < n; i+=3){
        sum1+=a[i];
        sum2+=a[i+1];
        sum3+=a[i+2];
    }

    sum=sum1+sum2;

    QueryPerformanceCounter((LARGE_INTEGER*)&tail);
    //cout << "time:" << (tail - head) * 1000.0 / freq << "ms" << endl;


    } while ((tail - head) * 1000.0 / freq < 500);



     //cout<<"range=";
    cout<<n<<endl;
    //cout << "sum_pro_time:" ;
    cout<< (tail - head) * 1000.0 / freq << endl<<count1<<endl;
    delete a;
}
void run_pro_5(int i){
    long long head, tail, freq;

    int n=i;
    float sum1=0.0,sum2=0.0,sum3=0.0,sum4=0.0,sum5=0.0;
    float sum=0.0;
   float* a=new float[n];

    for (int i = 0; i < n; i++) {
        a[i] = i;
    }


    int count1=0;

    QueryPerformanceFrequency((LARGE_INTEGER*)&freq);

    QueryPerformanceCounter((LARGE_INTEGER*)&head);
    do {

    count1++;
    sum=0.0;
    sum1=0.0;
    sum2=0.0;
    sum3=0.0;
    sum4=0.0;
    sum5=0.0;
    for (int i = 0; i < n; i+=5){
        sum1+=a[i];
        sum2+=a[i+1];
        sum3+=a[i+2];
        sum4+=a[i+3];
        sum5+=a[i+4];
    }

    sum=sum1+sum2;

    QueryPerformanceCounter((LARGE_INTEGER*)&tail);
    //cout << "time:" << (tail - head) * 1000.0 / freq << "ms" << endl;


    } while ((tail - head) * 1000.0 / freq < 500);



     //cout<<"range=";
    cout<<n<<endl;
    //cout << "sum_pro_time:" ;
    cout<< (tail - head) * 1000.0 / freq << endl<<count1<<endl;

    delete a;
}
void run_pro_10(int i){
    long long head, tail, freq;

    int n=i;
    float sum1=0.0,sum2=0.0,sum3=0.0,sum4=0.0,sum5=0.0
    ,sum6=0.0 ,sum7=0.0 ,sum8=0.0 ,sum9=0.0 ,sum0=0.0;
    float sum=0.0;
    float* a=new float[n];


    for (int i = 0; i < n; i++) {
        a[i] = i;
    }


    int count1=0;

    QueryPerformanceFrequency((LARGE_INTEGER*)&freq);

    QueryPerformanceCounter((LARGE_INTEGER*)&head);
    do {

    count1++;
    sum=0.0;
    sum1=0.0;
    sum2=0.0;
    sum3=0.0;
    sum4=0.0;
    sum5=0.0;
    sum6=0.0;
    sum7=0.0;
    sum8=0.0;
    sum9=0.0;
    sum0=0.0;
    for (int i = 0; i < n; i+=10){
        sum1+=a[i];
        sum2+=a[i+1];
        sum3+=a[i+2];
        sum4+=a[i+3];
        sum5+=a[i+4];
        sum6+=a[i+5];
        sum7+=a[i+6];
        sum8+=a[i+7];
        sum9+=a[i+8];
        sum0+=a[i+9];

    }

    sum=sum1+sum2;

    QueryPerformanceCounter((LARGE_INTEGER*)&tail);
    //cout << "time:" << (tail - head) * 1000.0 / freq << "ms" << endl;


    } while ((tail - head) * 1000.0 / freq < 500);



     //cout<<"range=";
    cout<<n<<endl;
    //cout << "sum_pro_time:" ;
    cout<< (tail - head) * 1000.0 / freq << endl<<count1<<endl;

    delete a;
}
void run_pro2_3(int i){
    long long head, tail, freq;

    int n=i;
    float sum=0.0;
    float* a=new float[n];

    for (int i = 0; i < n; i++) {
        a[i] = i;
    }


    int count1=0;

    QueryPerformanceFrequency((LARGE_INTEGER*)&freq);

    QueryPerformanceCounter((LARGE_INTEGER*)&head);
    do {

    count1++;

    for(int m=n;m>1;m/=3)
        for(int i=0;i<m/3;i++)
            a[i]=a[i*3]+a[i*3+1]+a[i*3+2];


    QueryPerformanceCounter((LARGE_INTEGER*)&tail);
    //cout << "time:" << (tail - head) * 1000.0 / freq << "ms" << endl;


    } while ((tail - head) * 1000.0 / freq < 500);



     //cout<<"range=";
    cout<<n<<endl;
    //cout << "sum_pro2_time:" ;
    cout<< (tail - head) * 1000.0 / freq << endl<<count1<<endl;

    delete a;
}
void run_pro2_5(int i){
    long long head, tail, freq;

    int n=i;
    float sum=0.0;
    float* a=new float[n];

    for (int i = 0; i < n; i++) {
        a[i] = i;
    }


    int count1=0;

    QueryPerformanceFrequency((LARGE_INTEGER*)&freq);

    QueryPerformanceCounter((LARGE_INTEGER*)&head);
    do {

    count1++;

    for(int m=n;m>1;m/=5)
        for(int i=0;i<m/5;i++)
            a[i]=a[i*5]+a[i*5+1]+a[i*5+2]+a[i*5+3]+a[i*5+4];


    QueryPerformanceCounter((LARGE_INTEGER*)&tail);
    //cout << "time:" << (tail - head) * 1000.0 / freq << "ms" << endl;


    } while ((tail - head) * 1000.0 / freq < 500);



     //cout<<"range=";
    cout<<n<<endl;
    //cout << "sum_pro2_time:" ;
    cout<< (tail - head) * 1000.0 / freq  << endl<<count1<<endl;

    delete a;
}
void run_pro2_10(int i){
    long long head, tail, freq;

    int n=i;
    float sum=0.0;
    float* a=new float[n];

    for (int i = 0; i < n; i++) {
        a[i] = i;
    }


    int count1=0;

    QueryPerformanceFrequency((LARGE_INTEGER*)&freq);

    QueryPerformanceCounter((LARGE_INTEGER*)&head);
    do {

    count1++;

    for(int m=n;m>1;m/=10)
        for(int i=0;i<m/10;i++)
            a[i]=a[i*10]+a[i*10+1]+a[i*10+2]+a[i*10+3]+a[i*10+4]
            +a[i*10+5]+a[i*10+6]+a[i*10+7]+a[i*10+8]+a[i*10+9];


    QueryPerformanceCounter((LARGE_INTEGER*)&tail);
    //cout << "time:" << (tail - head) * 1000.0 / freq << "ms" << endl;


    } while ((tail - head) * 1000.0 / freq < 500);



     //cout<<"range=";
    cout<<n<<endl;
    //cout << "sum_pro2_time:" ;
    cout<< (tail - head) * 1000.0 / freq << endl<<count1<<endl;

    delete a;
}










int main()
{
    int rang[12] = {10,100,1000,10000,100000,1000000,10000000,100000000,250000000,500000000,750000000,1000000000};
    int rang2[30];
    for(int i=0;i<10;i++)
        rang2[i]=1000000+1000000*i;
    for(int i=10;i<20;i++)
        rang2[i]=10000000+10000000*(i-10);
    for(int i=20;i<30;i++)
        rang2[i]=100000000+100000000*(i-20);

    for(int i=0;i<30;i++)
        run_pro2_10(rang2[i]);
    return 0;
}
