package com.Sherry;

/**
 * Created by lenovo on 2017-01-23.
 * 取数组最大值
 * 遍历数组
 * Wrote by Sherry
 * date 2017
 */
public class getArrayMax {
    public int getMax(int[] input){
        int last = input[0];
        for (int i:input){
            if(i > last){
                last = i;
            }
        }
        return last;
    }
}
