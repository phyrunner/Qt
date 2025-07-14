# github初识测试用

本仓库的git url为：git@github.com:phyrunner/Qt.git

## git bash
从官网https://git-scm.com/downloads 
下载git bash，安装过程一路默认。

## ssh keys
*参考https://blog.csdn.net/bdfcfff77fa/article/details/145791820*

打开git bash，先进入.ssh文件夹，位于用户目录下
```bash
cd ~/.ssh
```
然后输入：
```bash
ssh-keygen -t rsa -C <git邮箱>
```
输入之后一路（三次）Enter（确认）就可以了。成功后会生成id_isa（私钥）和id_isa.pub（公钥）两个文件。然后进入github账户主页，点开SSH and GPG keys一栏，添加ssh keys，把id_isa.pub文件内容复制粘贴到key中即可添加成功。

之后回到git bash，检查是否成功绑定
```bash
ssh -T git@github.com
```
成功会出现类似如下输出：Hi phyrunner! You've successfully authenticated, but GitHub does not provide shell access.

如果失败可能是权限问题，比如将已有账号的ssh keys公钥私钥文件复制到新电脑上，但文件权限不对，应该在新电脑修复密钥文件权限：
```bash
chmod 600 ~/.ssh/id_rsa      # 私钥必须设为仅用户可读写
chmod 644 ~/.ssh/id_rsa.pub  # 公钥可读
```

成功后设置一下用户名和邮箱
```
git config --global user.name <gitname>
git config --global user.email <git邮箱>
```

## git clone
配好ssh后打开git bash输入以下命令就可以把本仓库克隆到本地：
```bash
git clone <git url>
```

有时需要克隆指定的分支：
```bash
git clone -b <branch name> <git url>
```

## git push
1. 打开git bash，新增要push的文件
```bash
git add <文件名>
```

2. 给要push的文件一个备注
```bash
git commit -m <备注>
```

3. push文件，第一次提交需要加-u，后续则不需要
```bash
git push -u origin main
git push origin main
```

4. 上一步push如果报错可能需要拉取让本地和仓库同步
```bash
git pull origin main
```
