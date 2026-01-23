#include "firstfit.h"

int firstfit::findblock(const vector<block>& memory, int size) {
    for (int i =0;i<memory.size();i++){
        if (memory[i].free && memory[i].size >=size){
            return i;
        }
    }
    return -1;
}
