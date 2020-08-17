# ENGR 301: Architectural Design and Proof-of-Concept

## Proof-of-Concept

The aim of an architectural proof-of-concept (spike or walking skeleton)
is to demonstrate the technical feasibility of your chosen architecture,
to mitigate technical and project risks, and to plan and validate your
technical and team processes (e.g., build systems, story breakdown,
Kanban boards, acceptance testing, deployment).

A walking skeleton is an initial technical attempt that will form the
architectural foundation of your product. Since a walking skeleton is
expected to be carried into your product, it must be completed to the
quality standards expected for your final product. A walking skeleton
should demonstrate all the technologies your program will rely on
"end-to-end" &mdash; from the user interface down to the hardware.

In the context of ENGR 301, a walking skeleton does not need to deliver
any business value to your project: the aim is technical validation and
risk mitigation.

## Document

The aim of the architectural design document is to describe the
architecture and high-level design of the system your group is to build,
to identify any critical technical issues with your design, and to
explain how you have addressed the highest rated technical and
architectural risks. The architecture document should also demonstrate
your understanding of architectural techniques and architectural
quality, using tools and associated notations as necessary to
communicate the architecture precisely, unambiguously and clearly in a
written technical document.

Page specifications below are *limits not targets* and refer to the
pages in the PDF generated from the markdown. Because the size of your
document is necessarily limited, you should ensure that you focus your
efforts on those architectural concerns that are most important to
completing a successful system: if sections are at their page limit,
indicate how many items would be expected in a complete specification.

The ENGR 301 project architecture design document should be based on the
standard ISO/IEC/IEEE 42010:2011(E) _Systems and software engineering
&mdash; Architecture description_, plus appropriate sections from
ISO/IEC/IEEE 29148:2018(E) _Systems and software engineering &mdash;
Life cycle processes &mdash; Requirements engineering_; ISO/IEC/IEEE
15289:2017 _Systems and software engineering &mdash; Content of
life-cycle information items (documentation)_; ISO/IEC/IEEE 15288:2015
_Systems and software engineering &mdash; System life-cycle processes_;
ISO/IEC/IEEE 12207:2017 _Systems and software engineering &mdash;
Software life cycle processes_ and ISO 25010 SQuaRE; with notations from
ISO/ISE 19501 (UML). In particular, Annex F of ISO/IEC/IEEE 15288 and
Annex F of ISO/IEC/IEEE 12207. These standards are available through the
Victoria University Library subscription to the
[IEEE Xplore Digital Library](https://ieeexplore.ieee.org/) (e.g., by
visiting IEEE Xplore from a computer connected to the University
network).

The document should contain the sections listed below, and conform to
the formatting rules listed at the end of this brief.

All team members are expected to contribute equally to the document and
list their contributions in the last section of the document (please
make sure that your continued contribution to this document can be
traced in GitLab). You should work on your document in your team's
GitLab repository in a directory called "M2_Architecture". If more than
one team member has contributed to a particular commit, all those team
member IDs should be included in the first line of the git commit
message. ``git blame``, ``git diff``, file histories, etc. will be tools
used to assess individual contributions, so everyone is encouraged to
contribute individually (your contribution should be made to many
sections of the document, rather than focusing on just a single
section), commit early and commit often.
