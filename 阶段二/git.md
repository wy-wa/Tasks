# markdown语法（基础）

## 一、标题

>语法：# (一级标题)  ## (二级标题)  ### (三级标题) 

>代码：
>
>```text
># 这是一级标题
>## 这是二级标题
>```

## 二、列表

### 1、无序列表

>代码:
>
>```text
>*/-/+ +空格
>```

## 三、代码显示

### 1、行内代码

>代码:
>
>```text
>`输入内容`
>```

### 2、代码块

>代码:
>
>````text
>```
>内容
>```
>````

> 快捷键:  Ctrl+Shift+K

## 四、链接

>代码:
>
>```text
>www.baidu.com
>[百度一下](https://www.baidu.com)
>[百度一下](https://www.baidu.com "显示内容")
>```



## 五、图片插入

>代码:
>
>```text
>![](图片路径 "显示内容")
>```

## 六、表情符号

>代码:
>
>```text
>:happy:、:cry:、:smile:
>```

> 显示相应表情:happy:,:cry:,:smile:

# Git学习笔记（基本）

## 1. Git简介

Git是一个分布式版本控制系统，它可以在任何时间点，将文档的状态作为更新记录保存起来。它是命令行式的，也有图形化操作方法，但掌握bash形式将事半功倍。

## 2. 创建新的仓库

你可以使用`git init`命令在当前目录下创建新的Git仓库并初始化。

```bash
$ git init
```

## 3. 克隆仓库

如果你想获取一个已经创建的Git仓库的副本，你可以使用`git clone`命令。

```bash
$ git clone <仓库地址>
```

## 4. 添加与提交

你可以使用`git add`命令来添加文件，或者使用`git commit`命令来提交你的改动。

```bash
$ git add <文件名>
$ git commit -m "随意标记"
```

## 5. 推送改动

你的改动现在是在你的本地仓库，要想将这些改动推送到远程仓库，你可以使用`git push`命令。

```bash
$ git push origin master
```

其中`origin`是仓库地址的别名，未设置就是`origin`

## 6. 连接到远程仓库

要想查看远程仓库，你可以使用`git remote`命令。你可以使用`git remote add`命令来添加新的远程仓库。

```bash
$ git remote add origin <仓库地址>
```

以上就是一份简单的Git学习笔记，希望对你有所帮助！

# Git学习笔记（进阶）

## 7. 分支管理

Git的一个重要特性就是分支管理。你可以使用`git branch`命令来创建新的分支。

```bash
$ git branch <branchname>
```

切换到你创建的分支，你可以使用`git checkout`命令。

```bash
$ git checkout <branchname>
```

## 8. 合并分支

如果你想将你的分支的改动合并到主分支，你可以使用`git merge`命令。

```bash
$ git merge <branchname>
```

## 9. 拉取远程改动

你可以使用`git pull`命令来拉取远程仓库的改动。

```bash
$ git pull
```

## 10. 查看提交历史

如果你想查看你的提交历史，你可以使用`git log`命令。

```bash
$ git log
```

## 11. 撤销改动

如果你想撤销你的改动，你可以使用`git revert`或者`git reset`命令。

```bash
$ git revert <commit>
$ git reset --hard <commit>
```

以上就是一份更加详细的Git学习笔记，希望对你有所帮助！

## 12. 查看状态

你可以使用`git status`命令来查看你的改动。

```bash
$ git status
```

# Git学习笔记（续）

## 13. 查看差异

如果你想查看你的改动，你可以使用`git diff`命令。

```bash
$ git diff
```

## 14. 忽略文件

如果你有一些文件或者文件夹，你不希望Git追踪，你可以在`.gitignore`文件中添加它们。

