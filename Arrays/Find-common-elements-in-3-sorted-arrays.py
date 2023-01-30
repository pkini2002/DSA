class Solution:
    def commonElements (self,A, B, C, n1, n2, n3):
        # your code here
       res1=set()
       res2=set()
       lst=[]
       p=set(A)
       q=set(B)
       r=set(C)
       
       res1=p.intersection(q)
       res2=res1.intersection(r)
       
       lst=list(res2)
       lst.sort()
       return lst
