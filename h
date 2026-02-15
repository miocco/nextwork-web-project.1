[1mdiff --git a/src/main/webapp/index.jsp b/src/main/webapp/index.jsp[m
[1mindex 4a9ae4f..cb552b2 100644[m
[1m--- a/src/main/webapp/index.jsp[m
[1m+++ b/src/main/webapp/index.jsp[m
[36m@@ -6,6 +6,8 @@[m
 [m
 <p>This is my NextWork web application working!</p>[m
 [m
[32m+[m[32m<p>If you see this line in Github, that means your latest changes are getting pushed to your cloud repo :o</p>[m
[32m+[m
 </body>[m
 [m
 </html>[m
[1mdiff --git a/README.md b/README.md[m
[1mnew file mode 100644[m
[1mindex 0000000..f702b77[m
[1m--- /dev/null[m
[1m+++ b/README.md[m
[36m@@ -0,0 +1,71 @@[m
[32m+[m[32m# Java Web App Deployment with AWS CI/CD[m
[32m+[m
[32m+[m[32mWelcome to this project combining Java web app development and AWS CI/CD tools![m
[32m+[m
[32m+[m[32m<br>[m
[32m+[m
[32m+[m[32m## Table of Contents[m
[32m+[m[32m- [Introduction](#introduction)[m
[32m+[m[32m- [Technologies](#technologies)[m
[32m+[m[32m- [Setup](#setup)[m
[32m+[m[32m- [Contact](#contact)[m
[32m+[m[32m- [Conclusion](#conclusion)[m
[32m+[m
[32m+[m[32m<br>[m
[32m+[m
[32m+[m[32m## Introduction[m
[32m+[m[32mThis project is used for an introduction to creating and deploying a Java-based web app using AWS, especially their CI/CD tools.[m
[32m+[m
[32m+[m[32mThe deployment pipeline I'm building around the Java web app in this repository is invisible to the end-user, but makes a big impact by automating the software release processes.[m
[32m+[m
[32m+[m[32m- I am doing this project to learn more about CI/CD and get hands on experience in autmating the flow from developing code to deployed web app.[m
[32m+[m[32m- This fits into my career goals because I want to become a DevOps engineer this year.[m[41m [m
[32m+[m
[32m+[m[32m<br>[m
[32m+[m
[32m+[m[32m## Technologies[m
[32m+[m[32mHere’s what I’m using for this project:[m
[32m+[m
[32m+[m[32m- **Amazon EC2**: I'm developing my web app on Amazon EC2 virtual servers, so that software development and deployment happens entirely on the cloud.[m
[32m+[m[32m-Keypairs, SSH connections. Git, Maven and Java.[m[41m [m
[32m+[m[32m- **VS Code**: For my IDE, I chose Visual Studio Code. It connects directly to my development EC2 instance, making it easy to edit code and manage files in the cloud.[m
[32m+[m[32m- **GitHub**: All my web app code is stored and versioned in this GitHub repository.[m
[32m+[m[32m- **[COMING SOON] AWS CodeArtifact**: Once it's rolled out, CodeArtifact will store my artifacts and dependencies, which is great for high availability and speeding up my project's build process.[m
[32m+[m[32m- **[COMING SOON] AWS CodeBuild**: Once it's rolled out, CodeBuild will take over my build process. It'll compile the source code, run tests, and produce ready-to-deploy software packages automatically.[m
[32m+[m[32m- **[COMING SOON] AWS CodeDeploy**: Once it's rolled out, CodeDeploy will automate my deployment process across EC2 instances.[m
[32m+[m[32m- **[COMING SOON] AWS CodePipeline**: Once it's rolled out, CodePipeline will automate the entire process from GitHub to CodeDeploy, integrating build, test, and deployment steps into one efficient workflow.[m
[32m+[m
[32m+[m
[32m+[m[32m<br>[m
[32m+[m
[32m+[m[32m## Setup[m
[32m+[m[32mTo get this project up and running on your local machine, follow these steps:[m
[32m+[m
[32m+[m[32m1. Clone the repository:[m
[32m+[m[32m    ```bash[m
[32m+[m[32m    git clone https://github.com/yourusername/nextwork-web-project.git[m
[32m+[m[32m    ```[m
[32m+[m[32m2. Navigate to the project directory:[m
[32m+[m[32m    ```bash[m
[32m+[m[32m    cd nextwork-web-project[m
[32m+[m[32m    ```[m
[32m+[m[32m3. Install dependencies:[m
[32m+[m[32m    ```bash[m
[32m+[m[32m    mvn install[m
[32m+[m[32m    ```[m
[32m+[m
[32m+[m[32m<br>[m
[32m+[m
[32m+[m[32m## Contact[m
[32m+[m[32mIf you have any questions or comments about my CI/CD, please contact:[m
[32m+[m[32mMatthew - [matthewiocco1993@hotmail.com](mailto:matthewiocco1993@hotmail.com)[m
[32m+[m
[32m+[m[32m- [LinkedIn] (https://www.linkedin.com/in/matthew-iocco-a788b014a/)[m
[32m+[m
[32m+[m[32m<br>[m
[32m+[m
[32m+[m[32m## Conclusion[m
[32m+[m[32mThank you for exploring this project! I'll continue to build this pipeline and apply my learnings to future projects.[m
[32m+[m
[32m+[m[32mA big shoutout to **[NextWork](https://learn.nextwork.org/app)** for their project guide and support. [You can get started with this DevOps series project too by clicking here.](https://learn.nextwork.org/projects/aws-devops-vscode?track=high)[m
[32m+[m
[1mdiff --git a/h b/h[m
[1mnew file mode 100644[m
[1mindex 0000000..60319e8[m
[1m--- /dev/null[m
[1m+++ b/h[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m[1mdiff --git a/src/main/webapp/index.jsp b/src/main/webapp/index.jsp[m[m
[32m+[m[32m[1mindex 4a9ae4f..cb552b2 100644[m[m
[32m+[m[32m[1m--- a/src/main/webapp/index.jsp[m[m
[32m+[m[32m[1m+++ b/src/main/webapp/index.jsp[m[m
[32m+[m[32m[36m@@ -6,6 +6,8 @@[m[m
[32m+[m[32m [m[m
[32m+[m[32m <p>This is my NextWork web application working!</p>[m[m
[32m+[m[32m [m[m
[32m+[m[32m[32m+[m[32m<p>If you see this line in Github, that means your latest changes are getting pushed to your cloud repo :o</p>[m[m
[32m+[m[32m[32m+[m[m
[32m+[m[32m </body>[m[m
[32m+[m[32m [m[m
[32m+[m[32m </html>[m[m
[1mdiff --git a/README.md b/README.md[m
[1mnew file mode 100644[m
[1mindex 0000000..f702b77[m
[1m--- /dev/null[m
[1m+++ b/README.md[m
[36m@@ -0,0 +1,71 @@[m
[32m+[m[32m# Java Web App Deployment with AWS CI/CD[m
[32m+[m
[32m+[m[32mWelcome to this project combining Java web app development and AWS CI/CD tools![m
[32m+[m
[32m+[m[32m<br>[m
[32m+[m
[32m+[m[32m## Table of Contents[m
[32m+[m[32m- [Introduction](#introduction)[m
[32m+[m[32m- [Technologies](#technologies)[m
[32m+[m[32m- [Setup](#setup)[m
[32m+[m[32m- [Contact](#contact)[m
[32m+[m[32m- [Conclusion](#conclusion)[m
[32m+[m
[32m+[m[32m<br>[m
[32m+[m
[32m+[m[32m## Introduction[m
[32m+[m[32mThis project is used for an introduction to creating and deploying a Java-based web app using AWS, especially their CI/CD tools.[m
[32m+[m
[32m+[m[32mThe deployment pipeline I'm building around the Java web app in this repository is invisible to the end-user, but makes a big impact by automating the software release processes.[m
[32m+[m
[32m+[m[32m- I am doing this project to learn more about CI/CD and get hands on experience in autmating the flow from developing code to deployed web app.[m
[32m+[m[32m- This fits into my career goals because I want to become a DevOps engineer this year.[m[41m [m
[32m+[m
[32m+[m[32m<br>[m
[32m+[m
[32m+[m[32m## Technologies[m
[32m+[m[32mHere’s what I’m using for this project:[m
[32m+[m
[32m+[m[32m- **Amazon EC2**: I'm developing my web app on Amazon EC2 virtual servers, so that software development and deployment happens entirely on the cloud.[m
[32m+[m[32m-Keypairs, SSH connections. Git, Maven and Java.[m[41m [m
[32m+[m[32m- **VS Code**: For my IDE, I chose Visual Studio Code. It connects directly to my development EC2 instance, making it easy to edit code and manage files in the cloud.[m
[32m+[m[32m- **GitHub**: All my web app code is stored and versioned in this GitHub repository.[m
[32m+[m[32m- **[COMING SOON] AWS CodeArtifact**: Once it's rolled out, CodeArtifact will store my artifacts and dependencies, which is great for high availability and speeding up my project's build process.[m
[32m+[m[32m- **[COMING SOON] AWS CodeBuild**: Once it's rolled out, CodeBuild will take over my build process. It'll compile the source code, run tests, and produce ready-to-deploy software packages automatically.[m
[32m+[m[32m- **[COMING SOON] AWS CodeDeploy**: Once it's rolled out, CodeDeploy will automate my deployment process across EC2 instances.[m
[32m+[m[32m- **[COMING SOON] AWS CodePipeline**: Once it's rolled out, CodePipeline will automate the entire process from GitHub to CodeDeploy, integrating build, test, and deployment steps into one efficient workflow.[m
[32m+[m
[32m+[m
[32m+[m[32m<br>[m
[32m+[m
[32m+[m[32m## Setup[m
[32m+[m[32mTo get this project up and running on your local machine, follow these steps:[m
[32m+[m
[32m+[m[32m1. Clone the repository:[m
[32m+[m[32m    ```bash[m
[32m+[m[32m    git clone https://github.com/yourusername/nextwork-web-project.git[m
[32m+[m[32m    ```[m
[32m+[m[32m2. Navigate to the project directory:[m
[32m+[m[32m    ```bash[m
[32m+[m[32m    cd nextwork-web-project[m
[32m+[m[32m    ```[m
[32m+[m[32m3. Install dependencies:[m
[32m+[m[32m    ```bash[m
[32m+[m[32m    mvn install[m
[32m+[m[32m    ```[m
[32m+[m
[32m+[m[32m<br>[m
[32m+[m
[32m+[m[32m## Contact[m
[32m+[m[32mIf you have any questions or comments about my CI/CD, please contact:[m
[32m+[m[32mMatthew - [matthewiocco1993@hotmail.com](mailto:matthewiocco1993@hotmail.com)[m
[32m+[m
[32m+[m[32m- [LinkedIn] (https://www.linkedin.com/in/matthew-iocco-a788b014a/)[m
[32m+[m
[32m+[m[32m<br>[m
[32m+[m
[32m+[m[32m## Conclusion[m
[32m+[m[32mThank you for exploring this project! I'll continue to build this pipeline and apply my learnings to future projects.[m
[32m+[m
[32m+[m[32mA big shoutout to **[NextWork](https://learn.nextwork.org/app)** for their project guide and support. [You can get started with this DevOps series project too by clicking here.](https://learn.nextwork.org/projects/aws-devops-vscode?track=high)[m
[32m+[m
[1mdiff --git a/h b/h[m
[1mnew file mode 100644[m
[1mindex 0000000..60319e8[m
[1m--- /dev/null[m
[1m+++ b/h[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m[1mdiff --git a/src/main/webapp/index.jsp b/src/main/webapp/index.jsp[m[m
[32m+[m[32m[1mindex 4a9ae4f..cb552b2 100644[m[m
[32m+[m[32m[1m--- a/src/main/webapp/index.jsp[m[m
[32m+[m[32m[1m+++ b/src/main/webapp/index.jsp[m[m
[32m+[m[32m[36m@@ -6,6 +6,8 @@[m[m
[32m+[m[32m [m[m
[32m+[m[32m <p>This is my NextWork web application working!</p>[m[m
[32m+[m[32m [m[m
[32m+[m[32m[32m+[m[32m<p>If you see this line in Github, that means your latest changes are getting pushed to your cloud repo :o</p>[m[m
[32m+[m[32m[32m+[m[m
[32m+[m[32m </body>[m[m
[32m+[m[32m [m[m
[32m+[m[32m </html>[m[m
[1mdiff --git a/README.md b/README.md[m
[1mnew file mode 100644[m
[1mindex 0000000..f702b77[m
[1m--- /dev/null[m
[1m+++ b/README.md[m
[36m@@ -0,0 +1,71 @@[m
[32m+[m[32m# Java Web App Deployment with AWS CI/CD[m
[32m+[m
[32m+[m[32mWelcome to this project combining Java web app development and AWS CI/CD tools![m
[32m+[m
[32m+[m[32m<br>[m
[32m+[m
[32m+[m[32m## Table of Contents[m
[32m+[m[32m- [Introduction](#introduction)[m
[32m+[m[32m- [Technologies](#technologies)[m
[32m+[m[32m- [Setup](#setup)[m
[32m+[m[32m- [Contact](#contact)[m
[32m+[m[32m- [Conclusion](#conclusion)[m
[32m+[m
[32m+[m[32m<br>[m
[32m+[m
[32m+[m[32m## Introduction[m
[32m+[m[32mThis project is used for an introduction to creating and deploying a Java-based web app using AWS, especially their CI/CD tools.[m
[32m+[m
[32m+[m[32mThe deployment pipeline I'm building around the Java web app in this repository is invisible to the end-user, but makes a big impact by automating the software release processes.[m
[32m+[m
[32m+[m[32m- I am doing this project to learn more about CI/CD and get hands on experience in autmating the flow from developing code to deployed web app.[m
[32m+[m[32m- This fits into my career goals because I want to become a DevOps engineer this year.[m[41m [m
[32m+[m
[32m+[m[32m<br>[m
[32m+[m
[32m+[m[32m## Technologies[m
[32m+[m[32mHere’s what I’m using for this project:[m
[32m+[m
[32m+[m[32m- **Amazon EC2**: I'm developing my web app on Amazon EC2 virtual servers, so that software development and deployment happens entirely on the cloud.[m
[32m+[m[32m-Keypairs, SSH connections. Git, Maven and Java.[m[41m [m
[32m+[m[32m- **VS Code**: For my IDE, I chose Visual Studio Code. It connects directly to my development EC2 instance, making it easy to edit code and manage files in the cloud.[m
[32m+[m[32m- **GitHub**: All my web app code is stored and versioned in this GitHub repository.[m
[32m+[m[32m- **[COMING SOON] AWS CodeArtifact**: Once it's rolled out, CodeArtifact will store my artifacts and dependencies, which is great for high availability and speeding up my project's build process.[m
[32m+[m[32m- **[COMING SOON] AWS CodeBuild**: Once it's rolled out, CodeBuild will take over my build process. It'll compile the source code, run tests, and produce ready-to-deploy software packages automatically.[m
[32m+[m[32m- **[COMING SOON] AWS CodeDeploy**: Once it's rolled out, CodeDeploy will automate my deployment process across EC2 instances.[m
[32m+[m[32m- **[COMING SOON] AWS CodePipeline**: Once it's rolled out, CodePipeline will automate the entire process from GitHub to CodeDeploy, integrating build, test, and deployment steps into one efficient workflow.[m
[32m+[m
[32m+[m
[32m+[m[32m<br>[m
[32m+[m
[32m+[m[32m## Setup[m
[32m+[m[32mTo get this project up and running on your local machine, follow these steps:[m
[32m+[m
[32m+[m[32m1. Clone the repository:[m
[32m+[m[32m    ```bash[m
[32m+[m[32m    git clone https://github.com/yourusername/nextwork-web-project.git[m
[32m+[m[32m    ```[m
[32m+[m[32m2. Navigate to the project directory:[m
[32m+[m[32m    ```bash[m
[32m+[m[32m    cd nextwork-web-project[m
[32m+[m[32m    ```[m
[32m+[m[32m3. Install dependencies:[m
[32m+[m[32m    ```bash[m
[32m+[m[32m    mvn install[m
[32m+[m[32m    ```[m
[32m+[m
[32m+[m[32m<br>[m
[32m+[m
[32m+[m[32m## Contact[m
[32m+[m[32mIf you have any questions or comments about my CI/CD, please contact:[m
[32m+[m[32mMatthew - [matthewiocco1993@hotmail.com](mailto:matthewiocco1993@hotmail.com)[m
[32m+[m
[32m+[m[32m- [LinkedIn] (https://www.linkedin.com/in/matthew-iocco-a788b014a/)[m
[32m+[m
[32m+[m[32m<br>[m
[32m+[m
[32m+[m[32m## Conclusion[m
[32m+[m[32mThank you for exploring this project! I'll continue to build this pipeline and apply my learnings to future projects.[m
[32m+[m
[32m+[m[32mA big shoutout to **[NextWork](https://learn.nextwork.org/app)** for their project guide and support. [You can get started with this DevOps series project too by clicking here.](https://learn.nextwork.org/projects/aws-devops-vscode?track=high)[m
[32m+[m
[1mdiff --git a/h b/h[m
[1mnew file mode 100644[m
[1mindex 0000000..60319e8[m
[1m--- /dev/null[m
[1m+++ b/h[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m[1mdiff --git a/src/main/webapp/index.jsp b/src/main/webapp/index.jsp[m[m
[32m+[m[32m[1mindex 4a9ae4f..cb552b2 100644[m[m
[32m+[m[32m[1m--- a/src/main/webapp/index.jsp[m[m
[32m+[m[32m[1m+++ b/src/main/webapp/index.jsp[m[m
[32m+[m[32m[36m@@ -6,6 +6,8 @@[m[m
[32m+[m[32m [m[m
[32m+[m[32m <p>This is my NextWork web application working!</p>[m[m
[32m+[m[32m [m[m
[32m+[m[32m[32m+[m[32m<p>If you see this line in Github, that means your latest changes are getting pushed to your cloud repo :o</p>[m[m
[32m+[m[32m[32m+[m[m
[32m+[m[32m </body>[m[m
[32m+[m[32m [m[m
[32m+[m[32m </html>[m[m
