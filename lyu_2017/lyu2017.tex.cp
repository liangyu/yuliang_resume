%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Liang Yu CV/Resume
% XeLaTeX Template
% Version 1.0 (5/5/2014)
%
% This template has been downloaded from:
% http://www.LaTeXTemplates.com
%
% Original author:
% Debarghya Das (http://www.debarghyadas.com)
% With extensive modifications by:
% Vel (vel@latextemplates.com)
%
% License:
% CC BY-NC-SA 3.0 (http://creativecommons.org/licenses/by-nc-sa/3.0/)
%
% Important notes:
% This template needs to be compiled with XeLaTeX.
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

\documentclass[a4paper]{lyu-resume} % Use US Letter paper, change to a4paper for A4 

\begin{document}

%----------------------------------------------------------------------------------------
%	TITLE SECTION
%----------------------------------------------------------------------------------------

%\lastupdated % Print the Last Updated text at the top right

\namesection{Liang}{Yu}{ % Your name
\urlstyle{same}\url{http://yuliang.xyz} \\ % Your website, LinkedIn profile or other web address
\href{mailto:yuliang.name@gmail.com}{yuliang.name@gmail.com} | 617.901.0618 % Your contact information
}

%----------------------------------------------------------------------------------------
%	LEFT COLUMN
%----------------------------------------------------------------------------------------

\begin{minipage}[t]{0.33\textwidth} % The left column takes up 33% of the text width of the page

%------------------------------------------------
% Skills
%------------------------------------------------

\section{Skills}

\location{Languages:}
Java \textbullet{} Swift \textbullet{} C \textbullet{} C++\\
Objective-C \textbullet{} Shell Script \\
Python \textbullet{} Tcl \textbullet{} \LaTeX\\
\location{Operating System:}
macOS \textbullet{} Linux (CentOS, Red Hat)\\
\location{networking:}
TCP/UDP \textbullet{} SIP \textbullet{} SDP \textbullet{} RTP \textbullet{} SSL/TLS\\
\location{Web Development:}
Javascript \textbullet{} HTML5 \textbullet{} CSS \textbullet{} Restful \\
Ajax \textbullet{} Bootstrap \textbullet{} MySQL \\ 
\location{Mobile Development:}
iOS \textbullet{} Android \textbullet{} Windows RT \\
\location{Development Tools:}
XCode \textbullet{} Eclipse \textbullet{} Android Studio\\
Visual Studio \textbullet{} GIT \textbullet{} SVN \textbullet{} GDB\\
SIPP \textbullet{} Wireshark \textbullet{} Fiddler
\sectionspace % Some whitespace after the section

%------------------------------------------------
% Links
%------------------------------------------------

%\section{Links} 

%Github:// \href{https://github.com/liangyu}{\bf liangyu} \\
%LinkedIn:\\
%\href{https://www.linkedin.com/in/liangyu8}{\bf www.linkedin.com/in/liangyu8} \\

%\sectionspace % Some whitespace after the section


%------------------------------------------------
% Education
%------------------------------------------------

\section{Education} 

\subsection{Northeastern University}

\descript{MS in Computer Science}
\location{2010.9 - 2012.12 | Boston, MA}
College of Computer and Information Science

\sectionspace % Some whitespace after the section

%------------------------------------------------

\subsection{Nanchang University}

\descript{BS in Mathematics}
\location{2005.9 - 2009.6 | Nanchang, China}
College of Science

\sectionspace % Some whitespace after the section

%------------------------------------------------
% Coursework
%------------------------------------------------

\section{Coursework}

\subsection{Graduate}

Functional Programming(Scheme) \\
High Performance Computing(C)\\
Advanced Algorithms \\
Computer System(C) \\
Parall Computing in MapReduce(Java) \\
Managing Software Development(Java)

\sectionspace % Some whitespace after the section

%------------------------------------------------

\subsection{Undergraduate}

Assemble Language(IBM) \\
Data Structure(C) \\
Intro to Database \\
C Programming Language

\sectionspace % Some whitespace after the section

%----------------------------------------------------------------------------------------

\end{minipage} % The end of the left column
\hfill
%
%----------------------------------------------------------------------------------------
%	RIGHT COLUMN
%----------------------------------------------------------------------------------------
%
\begin{minipage}[t]{0.66\textwidth} % The right column takes up 66% of the text width of the page

%------------------------------------------------
% Experience
%------------------------------------------------

\section{Experience}

\runsubsection{Oracle}
\descript{| Software Testing Engineer}

\location{2014.2 – recent | Bedford, MA}
\textbf{TSM Project, Linux, iOS, Android platforms}
\vspace{\topsep} % Hacky fix for awkward extra vertical space
\begin{tightitemize}
\item Enhanced the exsited iOS app to test more features. Rewrote an new version of iOS app with Swift language, and iOS 10 SDK. Added read audio communication with Oracle SBC, Upgrade existed tsmserver to handle multi-thread clients.
\item Upgrated the Android Test App with Android 5.0 SDK.
\item Wrote Tcl scripts to automate around 1000 test cases, which boost the test coverage by 500 Percentage. 
\item Raised 200 defects, including critical defect revealing the sever defect in performance and capacity. pointing out the potential fix solutions
\end{tightitemize}

\sectionspace % Some whitespace after the section

%------------------------------------------------

\runsubsectionnormal{Integrated Computer Solutions}
\descriptbold{| Software Developer}

\location{2013.4 – 2014.2 | Bedford, MA}
\textbf{Topics (Android App)}
\begin{tightitemize}
\item Implemented AsyncTask class to call the Restful API and parsed the reponses in JSON format.
\item Bridged the UI views and the datasources by extending Android BaseAdapter class.
\item Built the UI with Fragments and navigation drawer.
\item Implemented NetworkManager Class to provide clear and convient access to the remote Server.
\item Implemented unit tests for APIs with pytest in Ubuntu environment. 
\end{tightitemize}

\vspace{2 mm}
\textbf{Inkarus Game (Window 8 Metro Apps)}
\begin{tightitemize}
\item Integrated the Microsoft Advertising SDK and add revenue selling point for 3rd party customers. 
\item Implemented codes to submit the score and screenshot of the solution to Windows Azure cloud and rendered data from cloud to users by using WinJS libraray and HTML5.
\item Found andFixed animation bugs in the legacy codes.
\end{tightitemize}

\sectionspace % Some whitespace after the section

%------------------------------------------------

\runsubsectionnormal{Acme Packet}
\descriptbold{| Software Developer Intern}

\location{2012.1 – 2012.8 | Bedford, MA}
\begin{tightitemize}
\item Enhanced an existed iOS App by fixing two defects and verifying on iPhone and iPad. WebRTC, Flex
\item Fixed defects in four existed web services applications and leveraged JavaScript and Doji API to develop the Call-Transfer web service application. 
\item Helped with ASC automated testing framework by writing 20 unit tests in Python.
\item Configured four VMs on XenServer to run SIP tests.
\end{tightitemize}

\runsubsectionnormal{Freelancer}
\descriptbold{| iOS App Developer}

\location{Subway Tracking App for MTBA}
\begin{tightitemize}
\item 
\end{tightitemize}

\location{Travelling App}
\begin{tightitemize}
\item 
\end{tightitemize}

\location{FlightRadar 24 app for Boston Plane Spotting}
\begin{tightitemize}
\item 
\end{tightitemize}

\sectionspace % Some whitespace after the section

%------------------------------------------------
% Societies
%------------------------------------------------
\section{SOCIETIES} 

\begin{tabular}{l}
\textbullet{} Contributed 3 defects to Apple Developer Community\\
\textbullet{} Private Pilot \textbullet{} Photographer \textbullet{} Travel Addict
\end{tabular}

\sectionspace % Some whitespace after the section
%----------------------------------------------------------------------------------------
\end{minipage} % The end of the right column
%----------------------------------------------------------------------------------------
\end{document}
