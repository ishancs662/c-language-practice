void sort(int* a,int len,void (*fn) (int*,int)){
        fn(a,len);
}
void asc(int* a,int len){
        int flag;
        for(int i=1;i<len;i++){
                flag=0;
                for(int j=1;j<len-i+1;j++){
                        if(a[j-1]>a[j]){
                                flag=1;
                                int temp;
        			temp=a[j-1];
        			a[j-1]=a[j];
        			a[j]=temp;

                        }
                }
                if (flag==0) break;
        }
}
void desc(int* a,int len){
        int flag;
        for(int i=1;i<len;i++){
                flag=0;
                for(int j=1;j<len-i+1;j++){
                        if(a[j-1]<a[j]){
                                flag=1;
                                int temp;
                                temp=a[j-1];
                                a[j-1]=a[j];
                                a[j]=temp;
                        }
                }
                if (flag==0) break;
        }
}

