# C++ 入門

## 参考サイト

http://cpp-lang.sevendays-study.com/day0.html

### Day 0
#### C言語の上位セット

1972年にC言語が開発されると、瞬く間に各方面で利用されるデファクトスタンダードの言語となりました。しかし、それにつれ、この言語の問題と限界が露呈するようになりました。

そのひとつは、C言語は、大規模な開発には、必ずしも向かないということです。時代の変化とともにコンピュータの性能が向上すると、多数のプログラマが参加する大規模開発が主流になってきました。しかし、C言語はそういったプログラミングを行ううえでは、必ずしも効率的な言語とはいえませんでした。そこで、C言語にオブジェクト指向的な拡張を施したC++(シー・プラス・プラス）言語が開発され、利用されるようになったのです。

#### オブジェクト指向

C++言語について詳しく説明する前に、オブジェクト指向とは何かということについて詳しく説明していきましょう。

オブジェクト指向の「オブジェクト」とは、英語で「もの」とか「物体」などを表す言葉で、データを現実世界のものに置き換える考え方です。

たとえば、オブジェクト指向プログラミング言語で、テレビを操作するプログラムを作成したと仮定します。そのとき、オブジェクト指向では、テレビを象徴する「テレビ」というオブジェクトを用意します。また、「テレビ」には、「スイッチを入れる」、「チャンネルを変える」などといった動作が伴います。これら動作のことを「メソッド」と言います。

オブジェクト指向では、これら「オブジェクト」とその動作である「メソッド」の組み合わせと、その相互作用でプログラムを記述します。

このような考え方が、現在のプログラミング言語の考え方の主流なのです。現在、主なオブジェクト指向言語には、以下のようなものがあります。

#### C++言語の特徴

ここでは、C++言語の特徴について説明します。一般に。C++言語には、以下の長所・短所があるといわれています。簡単にまとめると、以下のようになります。

C++言語の長所
C言語と互換性があり、ソースコードを再利用できる。
他のオブジェクト指向言語と違い独自のフレームワーク必要とせず、ネイティブコードを得られる。
C言語よりもセキュリティの面が優れている。
これに対し、デメリットとしては以下のようなものがあげられます。

C++言語の短所
他の言語に比べ、言語使用が複雑。
標準で利用できるライブラリが少ない。
メモリ管理機能（GC機能）が存在しない。
といった点が挙げられます。