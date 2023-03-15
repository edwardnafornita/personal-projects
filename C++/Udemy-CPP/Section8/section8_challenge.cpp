#include <iostream>%%%%%%%%%%%%%%%%%
% This is an sample CV template created using altacv.cls
% (v1.1.5, 1 December 2018) written by LianTze Lim (liantze@gmail.com). Now compiles with pdfLaTeX, XeLaTeX and LuaLaTeX.
%
%% It may be distributed and/or modified under the
%% conditions of the LaTeX Project Public License, either version 1.3
%% of this license or (at your option) any later version.
%% The latest version of this license is in
%%    http://www.latex-project.org/lppl.txt
%% and version 1.3 or later is part of all distributions of LaTeX
%% version 2003/12/01 or later.
%%%%%%%%%%%%%%%%

%% If you need to pass whatever options to xcolor
\PassOptionsToPackage{dvipsnames}{xcolor}
\PassOptionsToPackage{lowtilde}{url}

%% If you are using \orcid or academicons
%% icons, make sure you have the academicons
%% option here, and compile with XeLaTeX
%% or LuaLaTeX.
% \documentclass[10pt,a4paper,academicons]{altacv}

%% Use the "normalphoto" option if you want a normal photo instead of cropped to a circle
% \documentclass[10pt,a4paper,normalphoto]{altacv}

\documentclass[10pt,a4paper,ragged2e, normalphoto]{altacv}

%% AltaCV uses the fontawesome and academicon fonts
%% and packages.
%% See texdoc.net/pkg/fontawecome and http://texdoc.net/pkg/academicons for full list of symbols. You MUST compile with XeLaTeX or LuaLaTeX if you want to use academicons.

% Change the page layout if you need to
\geometry{left=1cm,right=9cm,marginparwidth=6.8cm,marginparsep=1.2cm,top=1.25cm,bottom=1.25cm}

% Change the font if you want to, depending on whether
% you're using pdflatex or xelatex/lualatex
\ifxetexorluatex
  % If using xelatex or lualatex:
  \setmainfont{Carlito}
\else
  % If using pdflatex:
  \usepackage[utf8]{inputenc}
  \usepackage[T1]{fontenc}
  \usepackage[default]{lato}
\fi

% Change the colours if you want to
\definecolor{IFBlue}{HTML}{0F6688}
\definecolor{IFDarkBlue}{HTML}{00425C}
\definecolor{IFMediumBlue}{HTML}{17739A}
\definecolor{IFLightBlue}{HTML}{228FBD}

\definecolor{IFGrey}{HTML}{6D6E71}
\definecolor{IFDarkGrey}{HTML}{231F20}
\definecolor{IFMediumGrey}{HTML}{4D4D4F}
\definecolor{IFLightGrey}{HTML}{808285}

\colorlet{heading}{IFBlue}
\colorlet{accent}{IFLightBlue}
\colorlet{emphasis}{IFMediumGrey}
\colorlet{body}{IFGrey}

% Change the bullets for itemize and rating marker
% for \cvskill if you want to
\renewcommand{\itemmarker}{{\small\textbullet}}
\renewcommand{\ratingmarker}{\faCircle}

%% sample.bib contains your publications
\addbibresource{sample.bib}

\begin{document}
\name{Níckolas Alves}
\tagline{Undergraduate Student - Institute of Physics - University of São Paulo}
%\photo{2.8cm}{logo}
\personalinfo{%
  % Not all of these are required!
  % You can add your own with \printinfo{symbol}{detail}
  \email{alves.nickolas@usp.com.br}
  \phone{+55 11 97145-8796}
  \location{São Paulo, Brazil}
  \homepage{\url{http://fma.if.usp.br/~nickolas}}
  %% You MUST add the academicons option to \documentclass, then compile with LuaLaTeX or XeLaTeX, if you want to use \orcid or other academicons commands.
  % \orcid{orcid.org/0000-0000-0000-0000}
}

%% Make the header extend all the way to the right, if you want.
\begin{fullwidth}
\makecvheader
\end{fullwidth}

%% Depending on your tastes, you may want to make fonts of itemize environments slightly smaller
% \AtBeginEnvironment{itemize}{\small}

%% Provide the file name containing the sidebar contents as an optional parameter to \cvsection.
%% You can always just use \marginpar{...} if you do
%% not need to align the top of the contents to any
%% \cvsection title in the "main" bar.
\cvsection[page1sidebar]{Formal Education/Degree}

\cvevent{Graduation in progress in Physics}{Institute of Physics - University of São Paulo (IFUSP)}{February 2017 -- Ongoing}{São Paulo, Brazil}{}{}
\begin{itemize}
 \item Undergraduate Research Project: Hyperbolic Equations
 \item Advisor: João Carlos Alves Barata
 \item Supported (August 2019 - Ongoing) by São Paulo Research Foundation (FAPESP) grant 2019/12158-4
\end{itemize}

\cvsection{Complementary Education}

\cvevent{IV Journeys Into Theoretical Physics}{IFT - Perimeter - SAIFR}{July 2019}{IFT-UNESP, São Paulo, Brazil}{}{}

\divider

\cvevent{II Jayme Tiomno School in Theoretical Physics}{Dead Physicists Society}{July 2019}{IFUSP, São Paulo, Brazil}{}{}
\begin{itemize}
\item Co-organized and attended the school as a student
\item Attended the courses in Magnetohydrodynamics and Relativistic Quantum Mechanics
\end{itemize}

\divider

\cvevent{IME-USP's Summer Program}{Institute of Mathematics and Statistics - University of São Paulo (IME-USP)}{January 2018 -- February 2018}{IME-USP, São Paulo, Brazil}{}{}
\begin{itemize}
\item Attended the course in Linear Algebra
\end{itemize}

\cvsection{Organization of Events}

\cvevent{Tensorial Reception}{Maruyama, W.; Alves, N. A.; Correa da Silva, R.}{2018 -- 2019}{São Paulo, Brazil}{\url{http://fma.if.usp.br/~nickolas/rt/2018/index.html}}{\url{http://fma.if.usp.br/~nickolas/rt/2019/index.html}}
This event consisted in a series of 20 min presentations by (mostly) graduate students about their research projects as a motivation for the Institute's freshmen. 

\addnextpagesidebar[-1ex]{page2sidebar}

\divider

\cvevent{Giants of Physics}{Correa da Silva, R.; Alves, N. A.; Zukanovich Funchal, R. \emph{et al.}}{April 2018 -- May 2019}{São Paulo, Brazil}{\url{http://fma.if.usp.br/~nickolas/gigantes/index.html}}{\url{http://fma.if.usp.br/~nickolas/sagan/index.html}}
A series of events in honor to great physicists. Each event consisted in three presentations related, but not restrained, to his work given by graduate students, which were followed by a round table formed by experienced researchers and, finally, a miscellaneous event related to the scientist (a lecture about his life, a movie exhibition, \emph{et cetera}). Details may be found (in portuguese) at the links provided.

\divider

\cvevent{Jayme Tiomno School in Theoretical Physics}{Alves, N. A.; Tredezini, P. H. T. L.; Maruyama, W.}{2018 -- 2019}{São Paulo, Brazil}{\url{http://fma.if.usp.br/~nickolas/jayme/2018/index.html}}{\url{http://fma.if.usp.br/~nickolas/jayme/2019/index.html}}
A winter school organized by students at IFUSP covering topics in Theoretical Physics, Computer Science and Mathematics aimed at undergraduate students.

\divider

\begin{fullwidth}

\cvevent{Dead Physicists Society}{Alves, N. A.}{October 2018 -- June 2019}{São Paulo, Brazil}{\url{http://fma.if.usp.br/~nickolas/dps/index.html}}{}
A student driven organization at IFUSP. Some of the events sponsored and/or organized by the DPS were: weekly undergraduate seminars (most of them presented fully in english); the II Jayme Tiomno School in Theoretical Physics; a poster session aimed at 2019 freshmen.

I created and directed the organization from October 2018 to June 2019. 

\cvsection{Bibliographical Production}

\cvevent{An Introduction to \LaTeX}{I Jayme Tiomno School in Theoretical Physics}{July 2019}{São Paulo, Brazil}{http://fma.if.usp.br/~nickolas/jayme/2018/latex.html}{}
Workshop presented at the I Jayme Tiomno School in Theoretical Physics, in which I taught students the fundamentals of \LaTeX. 

\divider

\cvevent{DPS Seminars}{Dead Physicists Society Undergraduate Seminar}{October 2018 -- September 2019}{São Paulo, Brazil}{\url{http://fma.if.usp.br/~nickolas/dps/index.html}}{}
I have so far presented six seminars at the Dead Physicists Society Undergraduate Seminars. Two of them were in portuguese and the remaining four in english. More information (titles, abstracts, presentation dates and slideshows or lecture notes) are available at the link provided. 

\divider

\cvevent{Songs to Solve Electrodynamics to}{Tensorial Reception}{February 2019}{São Paulo, Brazil}{\url{http://fma.if.usp.br/~nickolas/rt/2019/index.html}}{}
Presentation given at the 2019 Tensorial Reception about a (not-so) hand-waving approach to Jefimenko's Equations. Both the abstract and the slideshow are available (in portuguese) at the link provided.

\divider

\cvevent{As Time Goes By - Seeking a Solution to Maxwell's Equations}{DPS Freshmen Poster Session}{February 2019}{São Paulo, Brazil}{\url{http://fma.if.usp.br/~nickolas/pdf/As_Time_Goes_By___Poster.pdf}}{}
Poster presented at the 2019 DPS Freshmen Poster Session, regarding a hand-waving approach to Maxwell's and Jefimenko's Equations. The original poster (in portuguese) is available at the provided link.

\end{fullwidth}

\end{document}

using namespace std;

int main(void) {
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    const int penny_value {1};

    int num_of_cents;

    cout << "Enter an amount in cents: " << endl;
    cin >> num_of_cents;

    int balance, dollars, quarters, dimes, nickels, pennies;
    dollars = num_of_cents / dollar_value;
    num_of_cents %= dollar_value;

    quarters = num_of_cents / quarter_value;
    num_of_cents %= quarter_value;

    dimes = num_of_cents / dime_value;
    num_of_cents %= dime_value;

    nickels = num_of_cents / nickel_value;
    num_of_cents %= nickel_value;

    pennies = num_of_cents;

    cout << "The amount you entered results in: " << endl;
    cout << "dollar(s): " << dollars << endl;
    cout << "quarter(s): " << quarters << endl;
    cout << "dime(s): " << dimes << endl;
    cout << "nickel(s): " << nickels << endl;
    cout << "penny(ies): " << pennies << endl;
}