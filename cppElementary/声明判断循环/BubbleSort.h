void sort(int array[]){
	int temp;
        for(int i = 0; i<6;i++){
                for(int j =0 ;j <6-i-1; j++){
                        if(array[j]<array[j+1]){
                                temp=array[j];
                                array[j]=array[j+1];
                                array[j+1]=temp;
                        }
                }
        }
}
