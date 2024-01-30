class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        st=deque()
        for i in tokens:
            if(i[0]=='-' and len(i)>1):
                if(i[1]>="0" and i[1]<="9"):
                    st.append(int(i))

            elif(i[0]>="0" and i[0]<="9"):
                st.append(int(i))
                print(int(i))
            else:
                ele1=st.pop()
                # st.pop()
                ele2=st.pop()
                # st.pop()
                print(ele1)
                print(ele2)
                x=0
                if(i=="+"):
                    x=ele1+ele2
                elif(i=="-"):
                    x=ele2-ele1
                elif(i=="*"):
                    x=ele1*ele2
                else:
                    x=int(ele2/ele1)
                st.append(x)
        return st.pop()