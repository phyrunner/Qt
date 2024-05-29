# github初识测试用

## git clone
配好ssh后打开git bash输入以下命令就可以把本仓库克隆到本地：
git clone git@github.com:phyrunner/Qt.git

## git push
1. 打开git bash，新增要push的文件
```
git add "文件名"
```

2. 给要push的文件一个备注
```
输入git commit -m “备注”
```

3. push文件，第一次提交需要加-u
```
git push -u origin main
git push origin main
```

4. 上一步push如果报错可能需要拉取让本地和仓库同步
```
git pull origin main
```