void bubbleSort(){
    int i, j;
    bool swapped;
    for(int i =0; i < numElem - 1; i++){
        swapped =false;
        for(j = 0; j < numElem - i -1; j++){
            if(myArray[j] > myArray[j+1]){
                swap(myArray[j], myArray[j+1]);
                swapped = true;
            }
        }

        if(swapped == false){

        }
    }
}
