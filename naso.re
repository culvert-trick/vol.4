= アジャイルにおけるテストの考え方 2020年版

//info{
著者：naso@sato hiroyuki
//}

//lead{
アジャイル開発を進める中で、テストの時間が足りないことが多い。
開発と並行してテストを終わらせるためには、テストエンジニアだけではなく、開発やPOの協力が必要不可欠である。
とはいえ、テストらエンジニアとしてできることをまとめていこう。
//} 

==  アジャイルですすめる中で起こる課題 

プロダクトやシステムを開発する中で、ちょっとしたコミュニケーションのミスや過去のソースコードに手を入れることで様々な問題が発生する。
アジャイル開発固有の問題ではないが、短いサイクルの中で発生すると致命的な課題となる。

ここでは、よく発生し、なかなか根本解決ができない課題2つに対して、早期発見を行うための仕組みを考える。
この章では、ソフトウェアテストにフォーカスする。そのため根本解決に至らない。むしろ仕組みで発見できるため課題が更に深くなる可能性がある。
仕組みとは便利になるが、根本的な課題解決ができないのは皮肉なものである。

ここで取り上げる課題は
 * 連携ミスによるチグハグな開発
 * 風が吹けば、どこかが壊れる

 この2点に対して、仕組みを考える。

=== 連携ミスによるチグハグな開発 



=== 風が吹けば、どこかが壊れる 


== 本章の前提知識

課題を話をすすめる上で、前提の共有を行う。そのためには、大雑把でもよいので前提条件を提示する。
読者の方に合う状況ではないが、自身の環境と照らし合わせて読み勧めてほしい。

=== テストを考えるシステム構成 

ブラウザを使ったWebシステムとする。
 * ブラウザで表示する画面
 * データの加工を行うAPI
 * データベース
 
 この3つのチームを考える。

=== 登場人物



== スプリント内のテストを考える 

=== テストピラミッドとテストラファエル 

=== 画面を使ったテストはわかりやすい 

== テストレベルとテストタイプ 

=== テストレベル 

=== テストタイプ 

== どんなふうにテストすすめるか 


== まとめ 

