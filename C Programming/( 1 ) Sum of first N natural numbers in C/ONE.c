#include <stdio.h>

int main() {
    // declare variables । ভেরিয়েবল নেওয়া।
    int num, i, sum = 0;
    printf(" Enter a positive number: ");
    // take any positive number | আপনি যে কোনো পজিটিভ/ধনাত্মক নম্বর বেছে নিতে পারেন।
    scanf("%d", & num);
    // executes until the condition remains true. | শর্তটি সত্য হওয়া পর্যন্ত এই loop কার্যকর হবে। 
    for (i = 0; i <= num; i++) {
        // at each iteration the value of i is added to the sum variable | প্রতিটি পুনরাবৃত্তিতে, i-এর মানের সাথে sum এর বর্তমান মান যোগ করা হচ্ছে, এবং যোগফলকে  sum এর নতুন মান নির্ধারণ করা হচ্ছে। 
        sum = sum + i;
    }
    // display the sum of number ।   sum  এর সর্বশেষ মান প্রিন্ট করা হচ্ছে। 
    printf("\n Sum of the first %d number is: %d", num, sum);
    return 0;
}