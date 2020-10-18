---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/base.hpp
    title: src/base.hpp
  - icon: ':heavy_check_mark:'
    path: src/datastructure/fenwick.hpp
    title: src/datastructure/fenwick.hpp
  - icon: ':heavy_check_mark:'
    path: src/datastructure/fenwick2d.hpp
    title: src/datastructure/fenwick2d.hpp
  - icon: ':heavy_check_mark:'
    path: src/util/fast_io.hpp
    title: src/util/fast_io.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/rectangle_sum
    links:
    - https://judge.yosupo.jp/problem/rectangle_sum
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
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/rectangle_sum\"\n\n#include\
    \ \"base.hpp\"\n#include \"util/fast_io.hpp\"\n#include \"datastructure/fenwick2d.hpp\"\
    \n\nint main() {\n    Scanner sc(stdin);\n    Printer pr(stdout);\n    int n,\
    \ q;\n    sc.read(n, q);\n    using P = pair<int, int>;\n    V<P> ps(n);\n   \
    \ V<ll> w(n);\n    for (int i = 0; i < n; i++) {\n        sc.read(ps[i].first,\
    \ ps[i].second, w[i]);\n    }\n    auto f2d = Fenwick2D<ll, int>(ps);\n    for\
    \ (int i = 0; i < n; i++) {\n        f2d.add(ps[i], w[i]);\n    }\n    for (int\
    \ i = 0; i < q; i++) {\n        int l, d, r, u;\n        sc.read(l, d, r, u);\n\
    \        pr.writeln(f2d.sum({l, d}, {r, u}));\n    }\n    return 0;\n}\n"
  dependsOn:
  - src/base.hpp
  - src/util/fast_io.hpp
  - src/datastructure/fenwick2d.hpp
  - src/datastructure/fenwick.hpp
  isVerificationFile: true
  path: src/fenwick_2d_rectangle_sum.test.cpp
  requiredBy: []
  timestamp: '2020-10-18 20:05:46+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: src/fenwick_2d_rectangle_sum.test.cpp
layout: document
redirect_from:
- /verify/src/fenwick_2d_rectangle_sum.test.cpp
- /verify/src/fenwick_2d_rectangle_sum.test.cpp.html
title: src/fenwick_2d_rectangle_sum.test.cpp
---