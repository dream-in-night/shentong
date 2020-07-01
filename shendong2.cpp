#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//// i,j ��ʾ �������ı߿��� 
//int compute_zhi(int X,int Y,int xmax,int ymax,int W,int H,int s,int t,int *R)
//{
//	*(R) = floor(X/s);
//	*(R) = floor(Y/t);
//	*(R)= ceil(xmax/s);
//	*(R) = ceil(ymax/t);	
//}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int w,h,s,t,k,P,Q,xmax,ymax;
    int x_i,y_j,i;
	cin >> w >> h >> s >> t >> k >> P >> Q;
	int X[k],Y[k],W[k],H[k];
	int count =0;
	for(i=0;i<k;i++)
	{
		cin >> X[i] >> Y[i] >> W[i] >> H[i];
	}
	int a[k],b[k],c[k],d[k];
	int e[4];
	int len=0;
	// ������ x_i ���������� y_j ���� 
	x_i = floor(float(P-w)/float(s));
	y_j = floor(float(Q-h)/float(t));
	for(i=0;i<k;i++)
	{
		xmax = X[i]+W[i];
		ymax = Y[i]+H[i];
		//  �� X��Y ̫��ʱ�� 
		if(X[i]>x_i*s+w)
		{
			continue;
		}
		if(Y[i]>y_j*t+h)
		{
			continue;
		}
		// �� xmax,ymax ̫��ʱ 
		if(xmax>s*x_i+w)
		{
			xmax = s*x_i+w;
		}
		if(ymax>t*y_j+w)
		{
			ymax = t*y_j+h;
		}
		cout << xmax << ymax << endl;
		
		// �������ж� 
		a[i] = floor(float(X[i])/float(s));
		b[i] = floor(float(Y[i])/float(t));
		c[i] = ceil(float(xmax)/float(s));
		d[i] = ceil(float(ymax)/float(t));
		len++;
	}
	for(i=0;i<len;i++)
	{
		cout << a[i]<<"  " << b[i] <<"  "<< c[i] << "  "<< d[i] << endl;
		count = count + (c[i]-a[i])*(d[i]-b[i]);
	}
	cout << count;
	
    
    
    
    return 0;
}

