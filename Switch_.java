package com.Sherry;

/**
 * Created by lenovo on 2017-01-23.
 * switch语句寻找的只是代码块的入口，需要 break 引导离开 switch 语句
 */
public class Switch_ {
    private void Text(){
        int i = 0;
        switch (i){
            case 0:
                System.out.println("The first.");
                break;
            case 1:
                System.out.println("The second");
        }
        return;
    }
}
