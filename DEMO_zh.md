### DEMO

此演示程序使用了 demo_client 密钥，包括以下文件：

* demo_client.key: demo_client 私钥，仅在生成 license 文件时使用。
* demo_client.pub: demo_client 公钥。
* demo_client-demo-20250202142019-cli.exe: 生成/查看/验证 license 文件的 CLI 工具。
* demo_client-demo-20250202142019.exe: 生成/查看/验证 license 文件的 GUI 工具。
* demo_client-demo-20250202142019.h: 开发者集成所需的头文件。
* demo_client-demo-20250202142019.lib: 开发者集成所需的 x64 库。



开发者可以使用可执行程序和 demo_client.key 来生成 license 文件。然后使用可执行程序或库来验证生成的 license 文件。显然，篡改后的 license 文件将无法通过验证。
