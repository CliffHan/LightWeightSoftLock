# LightWeightSoftLock [中文](./README_zh.md)
A light weight software license management solution



## Introduction

`LightWeightSoftLock` helps developers quickly integrate licensing and control features into their software.



## How it works

1. Developer could use provided `keytool` to generate a key pair, keep the private key for himself, and send the pubkey to LightWeightSoftLock. It will build a series executables/libraries, including encrypted pubkey.
2. Developer could use executable to generate license files.
3. Developer could integrate built libraries to their own app, to verify license files.

> Note:  For now, the process of building dedicated executables/libraries still need to be triggered manually. So if you really need it, [mail to me](mailto:cliff.hp@gmail.com) and see what I can help.



Demo is provided, which includes executables/libraries embedded with key from "demo_client" as an example. But it's **NOT FOR PRODUCTION** because the private key is provided as well. Check [DEMO.md](./DEMO.md) for further information.



>  Note: This project is still under development. If you have any suggestions or feedback, please feel free to submit an issue and share your thoughts with me.
