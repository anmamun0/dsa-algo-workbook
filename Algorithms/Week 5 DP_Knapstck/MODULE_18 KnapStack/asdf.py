def fn(n, W):
  if(n == 0 or W==0 ): return 0
    
  if(weight[n-1]<=W):
    op1 = fn(n-1, W-weight[n-1])+value[n-1]
    op2 = fn(n-1,W)
    return max(op1,op2)
      
  else:
    op2 = fn(n-1,W)
    return op2
  
weight = [2, 3 ,4, 5]
value = [1, 3, 5, 3]
ans = fn(4,11)
print(ans)
