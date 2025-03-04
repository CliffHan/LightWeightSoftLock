# LightWeightSoftLock
一个轻量的软件授权管理方案


## Introduction

`LightWeightSoftLock` 能够帮助开发者快速集成授权管理功能到自己的软件中。



## 如何使用

1. 开发者可以使用 `keytool` 生成密钥对，保留私钥，将公钥发送给 LightWeightSoftLock 系统。系统会生成一系列可执行文件/库，其中集成了加密后的公钥。
2. 开发者可以使用生成的可执行文件，来生成 license 文件。
3. 开发者可以将生成的库集成到自己的应用中，用于验证 license 文件。

> 注：目前，生成可执行文件/库的过程仍需人工操作。 所以如果确实有需求，可以[发邮件](mailto:cliff.hp@gmail.com)与我沟通处理。



这里提供了 Demo 演示，作为范例，Demo 包含了使用 demo_client 密钥生成的可执行程序/库。可以用来实验，但由于 Demo 私钥是公开的，所以**无法直接用于生产环境**。可以查看 [DEMO.md](./DEMO_zh.md) 获取进一步信息。



>  注：此项目仍在开发中。如果有建议或反馈，可以通过 issue 或邮件与我联系。谢谢。
