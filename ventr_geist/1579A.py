for i in range(int(input())):
    s=input()
    num_a=s.count('A')
    num_b=s.count('B')
    num_c=s.count('C')
    if(num_a+num_c==num_b):
        print('YES')
    else:
        print('NO')