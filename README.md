深入理解C++11：新特性解析与应用

内容简介

　　国内首本全面深入解读C++11新标准的专著，由C++标准委员会代表和IBM XL编译器中国开发团队共同撰写。不仅详细阐述了C++11标准的设计原则，而且系统地讲解了C++11新标准中的所有新语言特性、新标准库特性、对原有特性的改进，以及如何应用所有这些新特性。

　　《华章科技：深入理解C++11：C++11新特性解析与应用》一共8章：第1章从设计思维和应用范畴两个维度对C++11新标准中的所有特性进行了分类，呈现了C++11新特性的原貌；第2章讲解了在保证与C语言和旧版C++标准充分兼容的原则下增加的一些新特性；第3章讲解了具有广泛可用性、能与其他已有的或者新增的特性结合起来使用的、具有普适性的一些新特性；第4章讲解了C++11新标准对原有一些语言特性的改进，这些特性不仅能让C++变得更强大，还能提升程序员编写代码的效率；第5章讲解了C++11在安全方面所做的改进，主要涵盖枚举类型安全和指针安全两个方面的内容；第6章讲解了为了进一步提升和挖掘C++程序性能和让C++能更好地适应各种新硬件的发展而设计的新特性，如多核、多线程、并行编程方面的新特性；第7章讲解了一些颠覆C++一贯设计思想的新特性，如lambda表达式等；第8章讲解了C++11为了解决C++编程中各种典型实际问题而做出的有效改进，如对Unicode的深入支持等。附录中则介绍了C++11标准与其他相关标准的兼容性和区别、C++11中弃用的特性、编译器对C++11的支持情况，以及学习C++11的相关资源。

作者简介

　　Michael Wong，C++11标准委员会（WG21）委员，WG21加拿大代表团团长及IBM公司代表（投票人），WG21 SG5(transactional Memory study group)学习小组组长。除此之外，Michael还是OpenMP委员会的CEO，SCC(Standards Council of Canada)的副主席。

　　Michael是多个C++11/OpenMP/STM新特性的合作编写者，活跃于各种技术会议，而且为Programming Committee of Boost以及IWOMP等国际会议服务。Michael也是IBM公司的高级技术专家，领导IBM XL C++编译器、XL C编译器的开发工作，当前致力于IBM编译器的C++11新特性部署。Michael在并行编程、C++基准测试、对象模型、泛型编程、模板元编程等多个技术领域均有涉猎，并且在对象模型以及事务内存等方面取得过多个专利。

　　早年Michael于多伦多大学获取得了天体物理学的学士学位，并在滑铁卢大学获得了硕士学位。在加入IBM之前，Michael曾先后供职于大卫·邓禄普天文台（David Dunlap Observatory），CDC公司（Control Data Corporation），BMO Nesbitt Burns公司等。

　　IBM XL编译器中国开发团队，IBM拥有悠久的编译器开发历史（始于上世纪80年代），在全球有将近400名高素质工程师组成的研发团队，其中包括许多世界知名的研究学者和技术专家。IBM一直以来都是编程语言的制定者和倡导者之一，并将长期在编译领域进行研发和投资。IBM编译器中国开发团队于2010年在上海成立，现拥有编译器前端开发人员（C/C++）、后端开发人员、测试人员，以及性能分析人员共16人。团队与IBM北美编译器团队紧密合作，共同开发、测试和发布基于POWER系统的AIX及Linux平台下的XL C/C++ 和XL Fortran系列产品，并对其提供技术支持。虽然团队成立时间不长，但已于2012年成功发布最新版本的XL C/C++ for Linux V12.1 & XL Fortran for Linux V14.1，并获得7项发明专利。团队成员拥有较丰富的编译器开发经验，对编译技术、编程语言、性能优化和并行计算等各领域都有一定的研究，也对C++11标准的各种新特性有较早的研究和理解，并正在实际地参与C++11新特性的开发工作。

目录

- 第1章 新标准的诞生
  * 1.1 曙光：C++11标准的诞生
    - 1.1.1 C++11/C++0x（以及C11/C1x）——新标准诞生
    - 1.1.2 什么是C++11/C++0x
    - 1.1.3 新C++语言的设计目标
  * 1.2 今时今日的C++
    - 1.2.1 C++的江湖地位
    - 1.2.2 C++11语言变化的领域
  * 1.3 C++11特性的分类
  * 1.4 C++特性一览
    - 1.4.1 稳定性与兼容性之间的抉择
    - 1.4.2 更倾向于使用库而不是扩展语言来实现特性
    - 1.4.3 更倾向于通用的而不是特殊的手段来实现特性
    - 1.4.4 专家新手一概支持
    - 1.4.5 增强类型的安全性
    - 1.4.6 与硬件紧密合作
    - 1.4.7 开发能够改变人们思维方式的特性
    - 1.4.8 融入编程现实
  * 1.5 本书的约定
    - 1.5.1 关于一些术语的翻译
    - 1.5.2 关于代码中的注释
    - 1.5.3 关于本书中的代码示例与实验平台
- 第2章 保证稳定性和兼容性
  * 2.1 保持与C99兼容
    - 2.1.1 预定义宏
    - 2.1.2 __func__预定义标识符
    - 2.1.3 _Pragma操作符
    - 2.1.4 变长参数的宏定义以及__VA_ARGS__
    - 2.1.5 宽窄字符串的连接
  * 2.2 long long整型
  * 2.3 扩展的整型
  * 2.4 宏__cplusplus
  * 2.5 静态断言
    - 2.5.1 断言：运行时与预处理时
    - 2.5.2 静态断言与static_assert
  * 2.6 noexcept修饰符与noexcept操作符
  * 2.7 快速初始化成员变量
  * 2.8 非静态成员的sizeof
  * 2.9 扩展的friend语法
  * 2.10 final/override控制
  * 2.11 模板函数的默认模板参数
  * 2.12 外部模板
    - 2.12.1 为什么需要外部模板
    - 2.12.2 显式的实例化与外部模板的声明
  * 2.13 局部和匿名类型作模板实参
  * 2.14 本章小结
- 第3章 通用为本，专用为末
  * 3.1 继承构造函数
  * 3.2 委派构造函数
  * 3.3 右值引用：移动语义和完美转发
    - 3.3.1 指针成员与拷贝构造
    - 3.3.2 移动语义
    - 3.3.3 左值、右值与右值引用
    - 3.3.4 std::move：强制转化为右值
    - 3.3.5 移动语义的一些其他问题
    - 3.3.6 完美转发
  * 3.4 显式转换操作符
  * 3.5 列表初始化
    - 3.5.1 初始化列表
    - 3.5.2 防止类型收窄
  * 3.6 POD类型
  * 3.7 非受限联合体
  * 3.8 用户自定义字面量
  * 3.9 内联名字空间
  * 3.10 模板的别名
  * 3.11 一般化的SFINEA规则
  * 3.12 本章小结
- 第4章 新手易学，老兵易用
  * 4.1 右尖括号＞的改进
  * 4.2 auto类型推导
    - 4.2.1 静态类型、动态类型与类型推导
    - 4.2.2 auto的优势
    - 4.2.3 auto的使用细则
  * 4.3 decltype
    - 4.3.1 typeid与decltype
    - 4.3.2 decltype的应用
    - 4.3.3 decltype推导四规则
    - 4.3.4 cv限制符的继承与冗余的符号
  * 4.4 追踪返回类型
    - 4.4.1 追踪返回类型的引入
    - 4.4.2 使用追踪返回类型的函数
  * 4.5 基于范围的for循环
  * 4.6 本章小结
- 第5章 提高类型安全
  * 5.1 强类型枚举
    - 5.1.1 枚举：分门别类与数值的名字
    - 5.1.2 有缺陷的枚举类型
    - 5.1.3 强类型枚举以及C++11对原有枚举类型的扩展
  * 5.2 堆内存管理：智能指针与垃圾回收
    - 5.2.1 显式内存管理
    - 5.2.2 C++11的智能指针
    - 5.2.3 垃圾回收的分类
    - 5.2.4 C++与垃圾回收
    - 5.2.5 C++11与最小垃圾回收支持
    - 5.2.6 垃圾回收的兼容性
  * 5.3 本章小结
- 第6章 提高性能及操作硬件的能力
  * 6.1 常量表达式
    - 6.1.1 运行时常量性与编译时常量性
    - 6.1.2 常量表达式函数
    - 6.1.3 常量表达式值
    - 6.1.4 常量表达式的其他应用
  * 6.2 变长模板
    - 6.2.1 变长函数和变长的模板参数
    - 6.2.2 变长模板：模板参数包和函数参数包
    - 6.2.3 变长模板：进阶
  * 6.3 原子类型与原子操作
    - 6.3.1 并行编程、多线程与C++11
    - 6.3.2 原子操作与C++11原子类型
    - 6.3.3 内存模型，顺序一致性与memory_order
  * 6.4 线程局部存储
  * 6.5 快速退出：quick_exit与at_quick_exit
  * 6.6 本章小结
- 第7章 为改变思考方式而改变
  * 7.1 指针空值——nullptr
    - 7.1.1 指针空值：从0到NULL，再到nullptr
    - 7.1.2 nullptr和nullptr_t
    - 7.1.3 一些关于nullptr规则的讨论
  * 7.2 默认函数的控制
    - 7.2.1 类与默认函数
    - 7.2.2 “=default”与“=deleted”
  * 7.3 lambda函数
    - 7.3.1 lambda的一些历史
    - 7.3.2 C++11中的lambda函数
    - 7.3.3 lambda与仿函数
    - 7.3.4 lambda的基础使用
    - 7.3.5 关于lambda的一些问题及有趣的实验
    - 7.3.6 lambda与STL
    - 7.3.7 更多的一些关于lambda的讨论
  * 7.4 本章小结
- 第8章 融入实际应用
  * 8.1 对齐支持
    - 8.1.1 数据对齐
    - 8.1.2 C++11的alignof和alignas
  * 8.2 通用属性
    - 8.2.1 语言扩展到通用属性
    - 8.2.2 C++11的通用属性
    - 8.2.3 预定义的通用属性
  * 8.3 Unicode支持
    - 8.3.1 字符集、编码和Unicode
    - 8.3.2 C++11中的Unicode支持
    - 8.3.3 关于Unicode的库支持
  * 8.4 原生字符串字面量
  * 8.5 本章小结
- 附录A C++11对其他标准的不兼容项目
  * A.1 C++11和C++03的不兼容项目
  * A.2 C++和ISO C标准的不兼容项目
  * A.3 C++11与C11的区别
  * A.4 针对C++03的完善
- 附录B 弃用的特性
- 附录C 编译器支持
- 附录D 相关资源
  * D.1 C++11特性建议稿
  * D.2 其他有用的资源
