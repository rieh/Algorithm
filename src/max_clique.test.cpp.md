---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/base.hpp
    title: src/base.hpp
  - icon: ':heavy_check_mark:'
    path: src/graph/maxclique.hpp
    title: src/graph/maxclique.hpp
  - icon: ':heavy_check_mark:'
    path: src/util/fast_io.hpp
    title: src/util/fast_io.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/maximum_independent_set
    links:
    - https://judge.yosupo.jp/problem/maximum_independent_set
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 399, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 399, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 258, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: base.hpp: line\
    \ -1: no such header\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/maximum_independent_set\"\
    \n\n#include \"base.hpp\"\n#include \"util/fast_io.hpp\"\n#include \"graph/maxclique.hpp\"\
    \n\nint main() {\n    Scanner sc(stdin);\n    Printer pr(stdout);\n\n    int n,\
    \ m;\n    sc.read(n, m);\n    VV<int> graph(n, V<int>(n, 1));\n    for (int i\
    \ = 0; i < n; i++) {\n        graph[i][i] = 0;\n    }\n    for (int i = 0; i <\
    \ m; i++) {\n        int a, b;\n        sc.read(a, b);\n        graph[a][b] =\
    \ graph[b][a] = 0;\n    }\n\n    struct E {\n        int to;\n    };\n    VV<E>\
    \ g(n);\n    for (int i = 0; i < n; i++) {\n        for (int j = 0; j < n; j++)\
    \ {\n            if (graph[i][j]) g[i].push_back({j});\n        }\n    }\n\n \
    \   auto answer = MaxClique<40, E>(g).clique;\n\n    int x = int(answer.size());\n\
    \    pr.writeln(x);\n    for (int i = 0; i < x; i++) {\n        pr.write(answer[i]);\n\
    \        if (i != x - 1) pr.write(\" \");\n    }\n    pr.writeln();\n}\n"
  dependsOn:
  - src/base.hpp
  - src/util/fast_io.hpp
  - src/graph/maxclique.hpp
  isVerificationFile: true
  path: src/max_clique.test.cpp
  requiredBy: []
  timestamp: '2020-10-18 20:05:46+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: src/max_clique.test.cpp
layout: document
redirect_from:
- /verify/src/max_clique.test.cpp
- /verify/src/max_clique.test.cpp.html
title: src/max_clique.test.cpp
---