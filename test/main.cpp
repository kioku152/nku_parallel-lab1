#include <iostream>
#include<windows.h>

using namespace std;


void run1(int i)
{
    long long head, tail, freq;

    int n=i;
    float* sum=new float[n];
    float* a=new float[n];
    float** b=new float*[n];
    for (int i = 0; i < n; i++) {
        a[i] = i;
        b[i] = new float[n];
        for (int j = 0; j < n; j++)
            b[i][j] = i + j;
    }


    int count1=0;

    QueryPerformanceFrequency((LARGE_INTEGER*)&freq);

    QueryPerformanceCounter((LARGE_INTEGER*)&head);
    do {

    count1++;
    for (int i = 0; i < n; i++) {
        sum[i] = 0.0;
        for (int j = 0; j < n; j++)
            sum[i] += b[j][i] * a[j];
    }

    QueryPerformanceCounter((LARGE_INTEGER*)&tail);
    //cout << "time:" << (tail - head) * 1000.0 / freq << "ms" << endl;
    } while ((tail - head) * 1000.0 / freq < 500);

    //cout<<"range=";
    cout<<n<<endl;
    //cout << "juzhen_time:" ;
    cout<< (tail - head) * 1000.0 / freq << endl<<count1<<endl;

    for (int i = 0; i < n; i++) {
        delete b[i];
    }
    delete a;
    delete b;
    delete sum;

}

int main()
{
    cout << "juzhen_time:" <<endl;
    int rang[9] = {10,100,1000,5000,10000,20000,30000,40000,50000};
    int rang2[18]={1000,2000,3000,4000,5000,6000,7000,8000,9000,10000,15000,20000,25000,30000,35000,40000,45000,50000};
    for(int i=0;i<18;i++)
        run1(rang2[i]);

    return 0;
}
