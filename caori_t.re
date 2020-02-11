= 自律的に思考するクリエイティブなテストエンジニアになろう！

//info{
著者：@caori_t
//}

//lead{
あなたはクリエイティブなテストエンジニアだろうか。自律的に思考しているだろうか。

それとも膨大なテスト実行をこなすオペレーターだろうか。言われたままにこなすだけの日々だろうか。

ここから始まるのは、これからの品質保証に必要不可欠な『自律的に思考する』クリエイティブなテストエンジニアへと転身していく旅のハジマリ。
ゆるっとファシリテーター（ゆるぱし）を名乗る筆者が、お供します(/・ω・)/
//} 

== どうして転身しないといけないの？

あなたがかかわるテストはどんなテストだろうか。
コマンド＆コントロールでテスト実行をこなすオペレータによる人海戦術を続けていないだろうか。
膨大なテストケースをこなすだけの日々。
言われた通り、書かれた通りに実行できる人が重宝される世界。

自動化やAIなどの新技術との共存が当たり前になる。
大規模で短納期なプロダクトの品質保証が必要になる。
次々と生まれる新しい要求に対して、表を埋める単純作業では応え続けられないだろう。

そう、自律的に思考するクリエイティブなテストエンジニアへの転身が必要なのだ。

もちろん、すべての人が転身する必要はないかもしれない。
日々、単純作業をこなすことに生きがいを感じている人は、そういう仕事がなくならないように祈りながら暮らしたっていい。
でも、単純作業の日々に、言われたことをこなす日々に、楽しくないと、もう飽きたと、そう感じているあなたには新たな一歩を踏み出してほしい。
もしかしたら、すでに踏み出しているあなたにも、更に次の一歩や、周りの踏み出しきれていない人をサポートするための一手として、ここからのお話を一緒に辿ってみてほしい。

一緒に、自律的に思考する、ちょっと悩ましくも楽しい未来の日々をつくろう(/・ω・)/

== 二つの違いは？

ここからは、【コマンド＆コントロールド（受動的）】と【セルフオーガナイズド（自律的）】の二つの言葉で違いをあきらかにしていこう。

以下のような状況を【コマンド＆コントロールド（受動的）】と定義する。

 * 誰かから言われたことをこなすだけ
 * どこかに書いてあったことをやるだけ
 * 担当していることの必要性がよくわからない
 * 必要性がよくわからないままなんとなく進めている

以下のような状況を【セルフオーガナイズド（自律的）】と定義する。

 * 言われた理由はなんだろう？
 * 書いてあることの背景はなんだろう？
 * そうか！だから必要なんだね！
 * 納得！不安なく自分の意志で進めている(/・ω・)/

一般的な言葉の定義と違うと感じる部分もあるかもしれないが、そこはぐっとこらえて読み進めてみてほしい。

=== シーン1：バグの修正をする

【コマンド＆コントロールド（受動的）】な世界では。。。

 * 画面Aにバグがあると指摘
 * 画面Aを修正＆リリース
 * 画面Bにも同じようなバグがあると指摘
 * 画面Bを修正＆リリース…

いつまで経っても同じようなバグが見つかって修正＆リリースの日々。。。
こんなことありませんか？

【セルフオーガナイズド（自律的）】な世界ではこんな風に。。。

 * 画面Aのバグってここだけ？
 * 画面Bも画面Cも同じような処理だよね
 * まとめて対応しなくっちゃ！
 * よーし画面の指摘はもう来なくなったぞ(/・ω・)/

=== シーン2：テスト技法の勉強をする

【コマンド＆コントロールド（受動的）】な世界では。。。

 * 上司に「テスト技法くらい勉強しろよ」って言われた…
 * テスト技法勉強すればいいよね！
 * 会社の書棚にテキスト発見！
 * このテキスト通りにやろーっと

まぁ、これでも悪くはなさそう。

【セルフオーガナイズド（自律的）】な世界だとどうだろう。

まずは、パターンA。

 * なんで技法知らないとダメなの？
 * どんな目標で勉強したらいいのかな？
 * 今度の業務では状態遷移のテストしてるんだね！
 * よし！まずは業務で使うために勉強してみよう(/・ω・)/

こちらは、パターンB。

 * なんで技法知らないとダメなの？
 * 今は勘でテストしている人ばかりなのか…
 * 上司は自分に新しいやり方を期待してるんだね！
 * よし！まずは一通り体系的に勉強してみよう(/・ω・)/

パターンAとパターンB、ずいぶん違うスタートラインになった！
こんなことも起きるのが【セルフオーガナイズド（自律的）】な世界。

== 見分けられるようになろう！

二つの世界の違いを垣間見たところで、ここからは自分で見分ける練習をしてみよう。
例題を参考に、ぜひ問題を解いてみてほしい。

できれば複数人でやってみて、お互いの答えを比べてみると効果的！
あなたが簡易ワークショップを開催してしまおう(/・ω・)/

//embed[latex]{
\clearpage
//}

=== 例題：テスト技法の勉強をする

これがワークシート。

//indepimage[vol4_caori_1]

下記のように、自分がこの辺かな？と思う位置に○をつけて、なぜそう判断したか？の理由も書こう。

//indepimage[vol4_caori_2]

全部埋めるとこんな感じ。

//indepimage[vol4_caori_3]


=== 問題：チームでテスト自動化してみる？

ある日、あなたは上司（もしくは同僚）からこんな風に言われた。

どう返すのが良いだろうか？

下のワークシートに○をつけて、判断理由も書いてみよう。

//indepimage[vol4_caori_4]

== 変換してみよう！

さて、見分けることに慣れてきたら、もう一歩。
今度は、もっと【セルフオーガナイズド（自律的）】に書き換えてみよう。

=== 問題：あなたのチームで勉強会のオーナやらない？

ワークシートは同じ形式。

//indepimage[vol4_caori_5]

例文が途中までしかないので、前半は前のワークと同じように、残りの欄には、より【セルフオーガナイズド（自律的）】な文章を考えて書いてみよう。

//indepimage[vol4_caori_6]

== さて、なにから始めようか？

ここまで読んでいただいて、あなたは気がついているかもしれない。

二つの世界は『0か1か』といったステレオタイプではなく、とても曖昧な境界で『グラデーションがある』ということに。

あなたは、あなた自身の評価として、どのあたりに位置していることが多いだろう。
そこからどのあたりを目指していきたいと考えるだろうか。

最初の一歩は何にしようか。

 * 自分の明日の業務内容が「なんのために」やるのか考えてみる
 * 上司から依頼される「作業」の「目的」をきいてみる
 * 目的に合った、もっと良いと思うことを「提案」してみる
 * 自分が今どれくらい【セルフオーガナイズド（自律的）】か分析してみる

もう少し具体的に書いてみる。

 * 今やっているテスト実行のテストケースの「目的」を考えてみる
 * 明日やるテスト設計で「なんでこのテスト技法を適用するのか」先輩に確認してみる
 * 今週のふりかえりでTryを決めるときに「どうしてそのTryを選ぶのか」を聞いてみる
 * とりあえずやってみよう！と言う上司に「うまくいったらどうなるのか」を確認して納得がいくまで議論する
 * 【コマンドアンドコントロールド（受動的）】に返してしまったな…と感じた時に、もっと良かった返しを考えてみる

これはほんの一例。
どれでも、どれじゃなくてもかまわない。

あなたの明日が、少しでも楽しいものに変わる一歩を踏み出してくれたら嬉しい。

== 余談：なんでこんなことを言い出したのか

【テスト設計コンテスト】をご存知だろうか。
テストエンジニアの技術力向上を目的として開催されているコンテスト。

その2018年のチュートリアルで、みんな大好きにしさんが『テストエンジニアのマインドを、表を埋める単純作業からクリエイティブなモデリングに変えていく』ということを話した。
『考えろ、考えろ、考えろ』というメッセージに、「私は何ができるのか？」という問いを突き付けられた気持ちだった。

当時も今も、テストの世界に関わりつつも、ストレートにテストエンジニアをやっている訳ではない立場で。
私を外の世界に連れ出してくれたきっかけであるテストの領域で、私なりに貢献できることはないか。
実行委員をやっているWACATEで転身を促すワークショップを開発して実施してみした。
そして、そのワークショップ事例をSQiPシンポジウムで発表した。
そんな流れを文章に書き起こしたのが、今回のお話しである。

ワークショップや事例発表の公開資料ともあわせ読んでもらえると、更に理解が深まるかもしれない。

== さいごに：ゆるっとファシリテーター（ゆるぱし）とは

アンオフィシャルに『ゆるっとファシリテーター』という肩書を名乗っている、@caori_t（かおりっと）。

【ファシリテーション】をはじめとする【ソフトスキル】にフォーカスしつつ、
個人やチームの「よくわかんない」を撲滅し「安心感のある世界」をつくることを促進したいと日々考えている。

//blankline
私の大好きな「エンジニア」と呼ばれる人達が、防御することに注力するような世界は終わらせて、
それぞれが、安心感の中で、持てる技術をフル活用し、よりよい世界になることを促進（＝ファシリテート）したいと考えて活動中。

本職もシステムテストチームのお世話係的なところから、アジャイル導入するチームなどの行動変容を促すコンサルタントになり、多方面に活動を展開中。

ファシリテーションのオンリー本なども書いています！

 * 
 * 
 
ご興味があればお手に取ってね(/・ω・)/