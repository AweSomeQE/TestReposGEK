double WhatIsThis(double a[10])
{
	int i;
	double prod = 0; 
	double twoprod = 0;
	for (int i = 0; i < 10; i++)
		prod *= a[i];
	for (int i = 0; i < 10; i++)
		twoprod = prod*2;
	return twoprod;
}

double IsThisWhat(double a[10])
{
	int i;
	double prod = 0;
	for (int i = 0; i < 10; i++)
		prod *= a[i];
	
	return prod;
}
