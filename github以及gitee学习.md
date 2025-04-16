# github以及gitee学习

##### github注册账号后，新建仓库，记得选择公开仓库，创建gitee账户后可以和github账号绑定在一起





## 关于github以及gitee上传以及下载项目

百度网盘下载安装

![image-20250415150001112](C:\Users\Administrator\AppData\Roaming\Typora\typora-user-images\image-20250415150001112.png)

安装过程全程next，**不要**做任何修改



### 下载github中的项目

鼠标右键选择git clone，在url中粘贴项目链接点击OK

### 上传本地项目到github仓库

**1.  add    预添加代码到本地仓库**

#### **注**：在 ***add*** 之前需要先将想要上传的文件放到本地仓库中去

鼠标右键选择tortoisegit再选择add，下一个界面选择OK，结果如下

![image-20250415151719879](C:\Users\Administrator\AppData\Roaming\Typora\typora-user-images\image-20250415151719879.png)

**2. commit    提交代码到本地仓库**

填写message后，点击commit，结果如下

![image-20250415152502955](C:\Users\Administrator\AppData\Roaming\Typora\typora-user-images\image-20250415152502955.png)

**3. push    把本地仓库提交的代码推送到远程仓库中**

点击push，结果如下

![image-20250415152712830](C:\Users\Administrator\AppData\Roaming\Typora\typora-user-images\image-20250415152712830.png)

直接点击OK，如果是第一次上传项目，需要登陆，若出现fatal: Authentication failed for ‘https://github.com/xxxx/git-demo.git/‘，可参考https://blog.csdn.net/weixin_45132964/article/details/127079584?ops_request_misc=%257B%2522request%255Fid%2522%253A%252203bf0d0a9aea5e49b4bf35d5e6444e6a%2522%252C%2522scm%2522%253A%252220140713.130102334.pc%255Fall.%2522%257D&amp;request_id=03bf0d0a9aea5e49b4bf35d5e6444e6a&amp;biz_id=0&amp;utm_medium=distribute.pc_search_result.none-task-blog-2~all~first_rank_ecpm_v1~rank_v31_ecpm-1-127079584-null-null.142^v102^pc_search_result_base3&amp;utm_term=fatal%3A%20Authentication%20failed%20for%20https%3A%2F%2Fgithub.com%2Fwb-embedded%2FSTC51_learn.git%2F&amp;spm=1018.2226.3001.4187，上传成功结果如下

![image-20250415160515903](C:\Users\Administrator\AppData\Roaming\Typora\typora-user-images\image-20250415160515903.png)





## 用命令方式克隆仓库，提交代码

### 克隆仓库

鼠标右键选择git bash here，结果如下

![image-20250415160951873](C:\Users\Administrator\AppData\Roaming\Typora\typora-user-images\image-20250415160951873.png)

与linux操作一致，***git clone + 项目链接***

### 提交代码

1. ***add***    git add XXX

2. ***commit***    git commit -m “测试命令提交”

3. ***push***    git push

   

或者

git init 进入.git文件夹修改config文件，加入

```
[user]

​	name = username

​	email = 邮箱地址
```

git remote add origin + 仓库地址

git pull origin master 拉取仓库内容

git add . 加入目录下所有文件

git commit -m “测试命令提交”

git push origin master