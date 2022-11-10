def magicsqaure(n):
    matrix=[[0 for x in range (n)]
                for y in range (n)]

    i=n//2  
    j=n-1
    num=1
    
    while num<=n*n:
        if i<0 and j==n:
            i=0
            j=n-2
        else:
            if i<0:
                i=n-1
            if j==n:
                j=0
        
        if matrix[i][j]:
            i=i+1
            j=j-2
            continue
        else:
            matrix[i][j] = num
            num=num+1
        
        i=i-1
        j=j+1
    print('\nMagic square for n =',n)
    print('\nSum of each row is:', int((n*(n*n+1))/2))
    print('\nMagic square is:\n')
    for i in range(0,n):
        for j in range(0,n):
            print(matrix[i][j], end=" ")
        print()
    print('\n')

    
n=int(input('No. of row in the magic square: '))
magicsqaure(n)