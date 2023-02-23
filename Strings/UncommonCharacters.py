class Solution:
    def UncommonChars(self,A, B):
        #code here
        s=set()
        for i in A:
            if i not in B:
                s.add(i)
        for i in B:
            if i not in A:
                s.add(i)
        if(bool(s)):
           y=sorted(s)
           sorted_string = ''.join(y)
           return sorted_string
        else:
            return -1
