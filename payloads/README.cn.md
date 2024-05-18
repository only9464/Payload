# BadUSB
![](https://img.shields.io/badge/BadUSB-fsociety-red)<br>
该项目利用USB协议上的漏洞，通过更改USB的内部固件，在接入USB接口后，模拟外置鼠标、键盘的功能，以此来使目标主机执行已经精心构造好的命令。<br>

![68747470733a2f2f696d616765732e67697465652e636f6d2f75706c6f6164732f696d616765732f323032312f303230322f3231333933325f36653462313436665f323332333636362e6a706567](https://user-images.githubusercontent.com/39434325/112772972-75a8e900-9066-11eb-9948-895916bf18ef.jpg)<br>
#### QQ交流群：775942445
#### 加微信-进入交流群：wwy18795980897

### 前言
和大多数人一样，最初见到BadUSB是在美剧《黑客军团》中，是fsociety组织常用的工具之一，无论是向服务器下载木马控制被害者主机，还是达琳在停车场帅气的扔出大量USB钓鱼，BadUSB都是功不可没的物理武器之一。  
![黑客军团](https://upload-images.jianshu.io/upload_images/11477676-71045c807dac0df6.png?imageMogr2/auto-orient/strip|imageView2/2/w/554/format/webp)<br>

### 优势
在USB攻击领域，很多年前常用的是老式USB病毒（自动运行）autorun.inf，但文件现在已经会被杀毒软件轻易地查杀，与autorun.inf不同，BadUSB是利用了USB协议上的漏洞，通过更改USB的内部固件，在正常的USB接口接入后，模拟外置鼠标、键盘的功能，以此来使目标主机执行已经精心构造好的命令。在此过程中不会引起杀毒软件、防火墙的一丝怀疑。而且因为是在固件级别的应用，U盘格式化根本无法阻止其内部代码的执行。  
![Leonardo_Arduino](https://upload-images.jianshu.io/upload_images/11477676-4347a3e41663dde6.jpg?imageMogr2/auto-orient/strip|imageView2/2/w/554/format/webp)<br>
我最新欢的是Leonardo_Arduino板子，因为同样是对USB的利用，Windows、Linux、MAC等各类操作系统默认存在leonardo_Arduino的USB接口驱动，不必联网下载专用的驱动程序。此外，向BadUSB烧录的程序极为简单，大部分是对键盘、鼠标按键进行模拟，上手较为容易。  
BadUSB也是社会工程学的一个典型示例，它极大地利用了人们的好奇心，在路边捡到的USB，估计九成以上的人们都想看看里面有什么东西，而当你插入个人主机或公司内网，攻击就很难再停止下来了。<br>
![BadUSB钓鱼](https://upload-images.jianshu.io/upload_images/11477676-3d1f812778254931.png?imageMogr2/auto-orient/strip|imageView2/2/w/554/format/webp)<br>

### 教程
[具体步骤请移步至简书](https://www.jianshu.com/p/2b2b1dab85fe) <br>
![操作步骤](https://upload-images.jianshu.io/upload_images/11477676-390539861bec703c.png?imageMogr2/auto-orient/strip|imageView2/2/w/554/format/webp)<br>

### 目录导图<br>

     BadUSB
     │  LICENSE
     │  README.en.md
     │  README.md
     │  
     ├─BlueScreen蓝屏
     │      BlueScreen蓝屏1（DOS）.ino
     │      BlueScreen蓝屏2（DOS）.ino
     │      BlueScreen蓝屏3（DOS）.ino
     │      xp和win7的蓝屏代码（DOS攻击）.ino
     │      延迟蓝屏（DOS）.ino
     │      注册表写入致使开机蓝屏通用（DOS）.ino
     │      注册表写入致使开机蓝屏（DOS）.ino
     │      
     ├─CobaltStrike木马联动
     │  │  BitsAdmin木马执行（与CS联动）.ino
     │  │  Pl木马执行（与CS联动）.ino
     │  │  PSL木马执行（与CS联动）.ino
     │  │  PY木马执行（与CS联动）.ino
     │  │  Regsvr32木马执行（与CS联动）.ino
     │  │  
     │  ├─CobaltStrike各种语言的Payload
     │  │      payload.bin
     │  │      payload.c
     │  │      payload.cs
     │  │      payload.java
     │  │      payload.pl
     │  │      payload.ps1
     │  │      payload.py
     │  │      payload.rb
     │  │      payload.sct
     │  │      payload.txt
     │  │      payload.vba
     │  │      
     │  └─CounterStrike木马制作教程
     │          CounterStrike.jpg
     │          CounterStrike木马制作教程.png
     │          
     ├─DNS劫持
     │      DOS命令设置多个DNS（DNS劫持）.ino
     │      PSL命令设置多个DNS（DNS劫持）.ino
     │      
     ├─Linux内置反向Shell
     │      Linux内置的反向Shell（BashShell）.ino
     │      Linux反向Shell（PerlShell）.ino
     │      Linux反向Shell（代码执行）.ino
     │      
     ├─MSF木马联动
     │      shell.apk
     │      shell.asp
     │      shell.aspx
     │      shell.elf
     │      shell.exe
     │      shell.jar
     │      shell.jsp
     │      shell.macho
     │      shell.php
     │      shell.pl
     │      shell.psl
     │      shell.py
     │      shell.sh
     │      shell.war
     │      Shell木马生成配置.txt
     │      
     ├─OSX内置反向Shell
     │      osx系统反向连接（dns_shell）.ino
     │      osx系统反向连接（perl_shell）.ino
     │      osx系统反向连接（ruby_shell）.ino
     │      
     ├─PSL全屏HACKED画面
     │  ├─FullScreenHackedv0
     │  │  │  get.ps1
     │  │  │  
     │  │  └─FullScreenHackedv
     │  │          FullScreenHackedv.ino
     │  │          
     │  ├─FullScreenHackedv2
     │  │      FullScreenHackedv2.ino
     │  │      wall.ps1
     │  │      
     │  └─FullScreenHackedv3[慎用]
     │      │  get.ps1
     │      │  
     │      └─FullScreenHackedv3
     │              FullScreenHackedv3.ino
     │              
     ├─Ubuntu信息搜集
     │      Ubuntu信息搜集到TXT文件（信息）.ino
     │      Ubuntu的基本终端命令（显示）.ino
     │      
     ├─WIFI密码获取
     │      WIFI密码导出（工具）.ino
     │      Wifi密码捕获（工具）.ino
     │      
     ├─WIFI连接木马
     │      强迫连接指定WIFI并下载psl木马运行（木马入侵）.ino
     │      
     ├─代码原理解读
     │      arduino按键代码基础.ino
     │      MSF木马制作教程.txt
     │      关于setup和loop方法的说明.txt
     │      
     ├─木马下载器
     │  ├─CERTUTIL木马下载器（木马攻击）代码
     │  │      链接服务器msf木马certutil下载版.ino
     │  │      
     │  ├─FTP木马下载器（木马攻击）代码
     │  │      FTP下载netcat并反向连接shell（木马攻击）.ino
     │  │      
     │  ├─JAVA木马写入（木马攻击）代码
     │  │      java木马写入（目标环境可运行Java）.ino
     │  │      server.java
     │  │      
     │  ├─PSL木马下载器（木马攻击）代码
     │  │      powershell下载服务器木马.ino
     │  │      psl木马下载器1（木马攻击）.ino
     │  │      psl木马下载器2（木马攻击）.ino
     │  │      psl木马下载器3通用（木马攻击）.ino
     │  │      psl木马下载器4通用（木马攻击）.ino
     │  │      psl木马下载器win&linux通用（木马攻击）.ino
     │  │      psl木马写入并反弹（木马攻击）.ino
     │  │      下载psl木马并二次执行（木马攻击）.ino
     │  │      链接服务器msf木马psl下载版.ino
     │  │      链接服务器psl下载版.ino
     │  │      
     │  └─PY木马下载器（木马攻击）代码
     │          PyShellServer.py
     │          Py木马写入（目标环境可运行Python）.ino
     │          
     ├─添加用户并开启服务
     │      添加用户并开启3389（工具）.ino
     │      添加用户并开启ftp（工具）.ino
     │      
     ├─特定功能代码
     │      Alt_F4循环关闭窗口后关机（工具）.ino
     │      Shift后门（工具）.ino
     │      单纯改变所有用户密码（恶作剧项）.ino
     │      启动PSL远程连接功能（工具）.ino
     │      强制删除360各项进程（工具）.ino
     │      强制执行关机ShutDown命令（工具）.ino
     │      截屏并发送指定FTP地址（工具）.ino
     │      打开对方445端口（内网渗透）.ino
     │      打开指定网页（工具）.ino
     │      更改所用账户密码+关闭系统进程+蓝屏（工具）.ino
     │      添加用户代码（工具）.ino
     │      简简单单关个机（恶作剧项）.ino
     │      隐藏CMD窗口（显示）.ino
     │      鼠标不停移动（工具）.ino
     │      
     ├─网站一句话入侵代码
     │      aspx一句话木马写入（网站服务器版本-过狗过D盾）.ino
     │      aspx一句话木马写入（网站服务器版本） .ino
     │      asp一句话木马写入（网站服务器版本-Script Encoder 加密）.ino
     │      asp一句话木马写入（网站服务器版本-动态解码）.ino
     │      asp一句话木马写入（网站服务器版本） .ino
     │      jsp一句话木马写入（jsp网站服务器使用）.ino
     │      jsp木马写入（jsp网站服务器使用非一句话）.ino
     │      php木马写入（php网站服务器使用-异或绕过）.ino
     │      php木马写入（php网站服务器使用-类绕过）.ino
     │      php木马写入（php网站服务器使用）.ino
     │      
     └─运行U盘内的程序_扩大入侵范围
         ├─UdiskRun
         │      UdiskRun.ino
         │      
         ├─UdiskRunv2
         │      UdiskRunv2.ino
         │      
         └─UdiskRunv3
                UdiskRunv3.ino


### 演示<br>
[更改所用账户密码+关闭系统进程+蓝屏测试](https://www.yuque.com/u12074055/gzgwfh/dg804t)<br>
![演示](https://upload-images.jianshu.io/upload_images/11477676-31390e8446540ca3.jpg?imageMogr2/auto-orient/strip|imageView2/2/w/554/format/webp)<br>

### 进阶<br>
网站一句话入侵<br>
BadUSB&MSF联动<br>
BadUSB&CS联动<br>
WIFI局域网入侵<br>
运行U盘内的程序_扩大入侵范围<br>
![进阶](https://upload-images.jianshu.io/upload_images/11477676-cc6c47da713ac2e2.jpg?imageMogr2/auto-orient/strip|imageView2/2/w/554/format/webp)<br>

### 解疑<br>
你可以在微信、QQ群、Gitee、Gihub上留言，团队看到后会尽快回复。
![常见问题和错误](https://upload-images.jianshu.io/upload_images/11477676-0c90a8004d5e5420.jpg?imageMogr2/auto-orient/strip|imageView2/2/w/554/format/webp)<br>

### 扩展<br>
实现特定功能<br>
其他实现BadUSB功能的板子（需要另安驱动，不是特别推荐）<br>
![扩展](https://upload-images.jianshu.io/upload_images/11477676-bba7de72abd2072d.jpg?imageMogr2/auto-orient/strip|imageView2/2/w/554/format/webp)<br>

### 更新<br>
###### 2021.02.06更新代码，部分是从其他爱好者哪里搜寻的开源代码，部分是与MSF联动的方法流程以及我认为比较好用的Arduino Leonardo基础按键代码<br>
###### 2021.02.14更新代码，从其他优秀项目中获得启发，加入了CobaltStrike联动的木马、DNS劫持代码、linux和osx内置反向shell、WIFI连接木马、WIFI密码获取、网站一句话入侵代码、psl全屏hacked画面、运行U盘内的程序_扩大入侵范围以及实现很多实用功能的代码，情人节快乐！<br>
![更新](https://upload-images.jianshu.io/upload_images/11477676-a54932b08d3ef2da.jpg?imageMogr2/auto-orient/strip|imageView2/2/w/554/format/webp)<br>

### 项目链接<br>

代码已上传至GitHub及Gitee，**跪求star**，其他项目也挺好玩的， **继续跪求Star**。<br>

 **GitHub：** https://github.com/wangwei39120157028/BadUSB<br>
 
 **Gitee：**  https://gitee.com/wwy2018/BadUSB<br>
