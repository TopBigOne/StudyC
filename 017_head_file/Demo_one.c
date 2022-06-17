/* 
头文件：
引入方式，有两种：
    #include<xxx.h>
    #include"xxx.h"
 **********只引入一次头文件：**********
 #ifndef HEAD_FILE
  // the entire  header file file
 #endif  


 **********有条件的引用：**********
时需要从多个不同的头文件中选择一个引用到程序中。
例如，需要指定在不同的操作系统上使用的配置参数。您可以通过一系列条件来实现这点，如下
#if SYSTEM_1
   # include "system_1.h"
#elif SYSTEM_2
   # include "system_2.h"
#elif SYSTEM_3


#endif



 */