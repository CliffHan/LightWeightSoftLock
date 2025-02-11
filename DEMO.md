### DEMO

This demo used key from "demo_client". With these files included:

* demo_client.key: private key of demo_client, will only be used to generate license files.
* demo_client.pub: public key of demo_client. 
* demo_client-demo-20250202142019-cli.exe: a CLI to generate/view/verify license files.
* demo_client-demo-20250202142019.exe: same as previous one, but with GUI.
* demo_client-demo-20250202142019.h: header file for developer to include.
* demo_client-demo-20250202142019.lib: x64 library for developer to integrate.



Developer could use executable and demo_client.key to generate license files. Then use executable or libraries to verify generated license files. Obviously, tampered license file will fail to verify.