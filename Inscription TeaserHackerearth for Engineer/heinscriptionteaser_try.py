def func(a,b,c):
	num=a
	M = 1000000007

	for x in xrange(0,N):
		for y in xrange(0,N):
			A[x][y]=num
			num=(num*b+c)%M
#cant declare a 2d array directly,hence didmot procede further 

N=3
func(1,2,3)

print(A)