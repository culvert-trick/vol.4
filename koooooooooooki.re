= カイゼンしなかったジャーニーをふりかえる

//info{
著者：@koooooooooooki
//}

//lead{
自分が良かれと思っていたカイゼンが，うまくいかないことで悩んだことはありませんか?
また「あの時，ああやっておけば・・・」みたいに後悔することはありませんか?

今回，筆者が行ってきたカイゼンと成果(失敗がいっぱい)を赤裸々にふりかえり，これからはどうやっていきたいか，エモく語りたいと思います．
//} 

== はじめに

今回紹介する事例は，2011年6月~2019年12月まで勤めた，いわゆる組み込み系ソフトを開発していた会社での活動の一部です．
ソフトウェアのQA部門がなかったので，開発チームがテストもして，保証した上でリリースしないければいけませんでした．
元々，オブジェクト指向開発のような開発手法やテスト駆動開発を知っている人があまりいない職場で，そういった手法を導入してチームを向上させることを期待されてたんだと思います．
知識も経験もない，相談相手もいない中で，チームが抱える問題を見つけては試行錯誤していきましたが，今考えたらチームメンバーにはたくさん迷惑をかけたと思います．

そんな風にやってきたカイゼン活動に対して，
「今の自分が過去の自分がやってきた事を俯瞰したら，いったい何が見えるんだろう?」
と思い，今だからこそふりかえってみました．

=== 今回使う思考ツール

今回は，TOCfEのロジックブランチ(以下，ブランチ)を使います．
ブランチは，@<b>{原因と結果の因果関係を，箱と矢印を使って見える化する}思考ツールです．

ペンと付箋があれば，次の手順で作ることができます．

//listnum[Procedure for Branch][ブランチ作成手順]{
起こった出来事を，１つずつ付箋に書きだす．
書き出した付箋を，原因と結果の関係で下から上方向に順番に並べる．
「もし(原因)であれば，結果として(結果)である．」と声に出して読んでみて，違和感がなければ矢印で結ぶ．原因が複数ある場合は「もし(原因1)かつ(原因2)であれば，結果として...」のように，「かつ」を使って読む．
違和感があれば，付箋の内容を書き換えたり，原因となる付箋を足したり，付箋の順番を変えたりする．
//}

ブランチを作っていく過程で，CLR(Category of Legitimate Reservation)を使って懸念を取り除いくことで，(究極的には)誰もが理解できる，論理的で筋の通ったブランチを作ることができます．

//listnum[CLR][4つの懸念(CLR)]{
箱に書かれた意味を理解できるか(明瞭性の懸念)
箱に書かれたことは本当か，大げさに表現してないか(存在の懸念)
矢印でつないだ箱を読んでみて，文章がしっくりくるか(因果の懸念)
他にも原因がないか(十分性の懸念)
//}

こうして作られたブランチは，何が原因で起きているか明確です．
根本原因を特定することができれば，根本原因を変えることで，それにつながる結果を変えることができます．
例えば，筆者の悪い習慣をブランチにしてみました．
もし一番上の『夜中まで寝てから明日の準備をする』という悪い習慣をやめたいと思った時，どうすればよいでしょうか?

//image[mycase][夜中に目覚めてしまうブランチ][scale=0.6]{
//}

『夜中まで寝てから明日の準備をする』をやらないための新しいアイデアを出していくより，『一休みをするためにコタツで横になる』をやめた方がいいですよね．
もっと言えば，一番下の原因のどれかをやめることができれば，結果的に悪い習慣を変える事ができますよね．

さて，みなさんならどう変えますか?

== じゃあ，壮大にふりかえってみたよ!!

と言っても，約9年の活動の中で，テストに対するいくつかのカイゼンに限定してます．
それだけでもおっきいの・・・

//image[branch][開発プロジェクトのブランチ][scale=1]{
//}

実際，結果的にどんな問題につながっていたのか考えると，こんな感じですかね．

 * リリース時にテスト工数が少なくなる(チームメンバーは「対応する工数がありません」と言っている)．
 * リリース時のテストが不十分になる(複合要因ではなく，様々な原因がある)．
 * もしテストが不十分で，変更箇所に不具合があるのなら，客先で不具合が発見される．

カイゼンしていた当時は，目の前にある問題ばかり考えてたので気にしていなかったけど，今ふりかえっても，どれも客先での不具合に帰着しているようでした．

では，実際のケースに分けて，それぞれをふりかえってみます．

=== ケース1: 「いつチェックアウトしても，ビルドができないんですけど・・・」

これは，2012年ごろに初めてカイゼンした時の問題です．
あの時のチームは，次のように開発してたと思います．

 1. 開発者は，機能を追加・修正する際，最新の開発環境をチェックアウトする．
 2. もし最新の環境でビルドに失敗したら，最低限の修正で動く状態にする．
 3. 修正が完了し簡単な動作確認が済んだら，自分の開発範囲だけコミットする(最新で確認しない!!)．
 4. それを繰り返し，ビルドができない箇所が増えていく
 5. リリースする際に，最新環境でビルドが成功するために修正する工数が1日以上発生する．

まぁ，CI/CDが主流な今ではありえないですよね．
前の前の会社のチームでは誰かが気づくと誰かが教えて直していたので，こんな状況は違和感しかなかった．
前の前の会社が特別だったのかな?
いや，違うはずだ!!
メンバーが近くにいるから伝えて直せばいいだけなのに，なんでそんなこともできないの?みたいな．

これを解決するために『自動ビルド環境を構築』して『開発者が最新の開発リポジトリで確認する』ようにしたんですが，その結果，次の図のようなブランチに変わったと思います．

//image[branch1][ケース1とカイゼン後のブランチ][scale=0.8]{
//}

今ふりかえると，ケース1は起こらなくなったはず!!でも，結局テスト工数は改善しなかったのかなぁ・・・

というのも，開発リポジトリのビルドが安定したことで，前より多く機能追加できるようになり，結果としてリリース対象の機能が増え，むしろテスト工数が足りない状況になったと思います．

=== ケース2: 「リファクタリングって言えば許されると思ってるでしょ?!」

2つ目の問題として，リファクタリングした結果，機能不足や挙動が変わるといったデグレードが発生していました．

デグレードする時って，大体こんな感じで変更してるんですよね．

 1. 機能追加を繰り返す(大体2, 3回くらい)．
 2. 設計が分かりにくくなると『リファクタリング』し始める．
 3. テストケースがないため回帰テストできないし，そもそも修正工数を確保していないので簡単な動作確認しかしない．

気づいた方もいると思いますが，彼らの言ってる『リファクタリング』は，テスト駆動開発におけるリファクタリングではありません．
開発が遅れてでも自分の納得がいく設計に変える事を正当化するために「リファクタリングしてます．」と報告しているだけなのです．
私はこれを『リファクタリング詐欺』と揶揄していました．

もし，あなたの周りにそんな人がいたら「なんでテストしないんですか?」「ちゃんとテストしてくださいよ．」と言ってみるといいかも．
きっと「テストが組み合わせ爆発するから，そんな事できるわけがない．」って，それぐらい分かんないの?アホなの?って勢いで返ってくるはず(笑)

余談を挟んでしまいましたが，デグレードするリスクを抱えたままですから，リリース時のテストが不十分と言っていいでしょう．

当時の私はテスト自動化原理主義者だったので『回帰テストをしない』を『自動テストを追加する』文化に変えてデグレードをなくそうと考えました．
とは言っても，チームにそんなパラダイムシフトがいきなり起きるわけないので，まずは小さく機能分割してテスタブルな設計に変えていきました．
効果さえ出れば，いつかみんなが自動テストをやってくれると思って・・・

//image[branch2][ケース2とカイゼン後のブランチ][scale=0.8]{
//}

結果的に『自動テストを追加する』文化にはなりませんでした．まぁ当然ですよね(笑)．
むしろ『機能分割して，テスタブルに再設計・保守する職人』というロールが生まれただけ．
そこに対する人員も増えることはなく，今まで通り，泥臭い仕事は引き続き重視された．
ちゃんと開発もテストやってるし，再利用されてるから，コストパフォーマンスはかなりいいのに，評価はそれほどでもない．
「他の人からは仕事している印象になるし，適度に不具合を出した方がいいのかなぁ・・・」と本気で思ってたくらい(苦笑)．

まぁ，今ふりかえると，もしかしたら『回帰テストをしない』のままでも問題がない状況だったのかも．
例えば，設計が枯れて『リファクタリング』が行われなくなったなら，図中の破線は消えてデグレードが起こらなくなります(実際は頻度が減るぐらいでしょうが)．

もしかしたら，デグレードのリスクは残ってったとしても，リスクに絞り込んで重点的にテストができるようになったかもしれない．
それくらいの成果はあったと思いたい(笑)．

=== ケース3: 「おじいちゃん，そのテストケース，さっき書いたでしょ?」

初めに言い訳しておくと，これは黒歴史中の黒歴史と言ってもいいくらいだ．

1チームが2つのプロジェクトを掛け持ちして並行開発したとき，
筆者が1チームのプロジェクトリーダー兼開発者兼テスター兼リリース担当(いや，これ全部だろ・・・)をしてた時のことだ．

リリース時期もほぼ同じだったので，ソースコードを再利用するなどして効率的よく開発する必要が出てきたんだ．
まぁ，ケース2で紹介した新しいロールの職人芸は効果てきめんでしたよ(にやり)．
ソースコードの再利用と同じように，テストケースを効率よく作りたいと思い，テスト管理ツールを導入してみたんだ．

//image[branch3][ケース3とカイゼン後のブランチ][scale=0.8]{
//}

最初に書いた通り大失敗だった．
テストケースを再利用する以前に，使い勝手の悪さが不評だった．
また，見かけ上の工数だけで言ったら，今まで通りEXCELを使ったCPM法をやった方がはるかに早かった．
その後のテスト実施や発生した不具合対応は，テストケース作った人の責任にならないからねぇ．

結局，あのテスト管理ツールは1回使って捨てたよ.
個人的にはテスト実行や集計が楽だったし，2,3回は繰り返したくらいで効果が出てきそうだったけどな・・・

何度も失敗してると，さすがに自動化やツールを使っただけじゃチームが変わらない事が分かってきた．
いや，正確には，それらの背景にある要求や思想が理解されない限り使いこなすことができないんだろうな，と思ったよ．

=== ケース4: 「そんな都合のいいもん，あるわけねーだろjk」

さて，最後は，テストに関する共通認識をチームが持たせるカイゼンです．

まずは，『各自の方法でテストを実施している』は，テストの十分性に何かしらの影響があると思うのですが，誰も善し悪しが分からない，カイゼン方法も良し悪しが分からない．
そこで，当時ちょうど書籍になっていたTPI-NEXTを使えば『自分たちに足りないものを認識できる』と思いました．

一方で『開発者がテストプロセスやテスト設計を知らない』のに，しっかりしたテストなんて普通できるわけないよね?
『チームがテスト活動を理解する』ためにテストの勉強会を実施しました．

//image[branch4][ケース4とカイゼン後のブランチ][scale=0.8]{
//}

結局これも，図中の破線が結果につながらずに終わったんですよね(苦笑)．

まずは，テスト計画をカイゼンする必要があるって事は判明しました．
社内の他の開発チームもアセスメントしたんですが，自分のチームの評価結果が比較的高かったんですよね．
それで満足してしまったのか，カイゼンには意識が向かなかったのかと．
ほんと，ドングリの背比べだった．

一方でテストの勉強会は，こんな風にやったんだ．

 * 仕様書ベースのテストのためのテスト技法のワーク．
 * テストアーキテクチャ(NGT/VSTeP)の紹介から，テストを計画するグループワーク．
 * 開発の現状の問題を把握して，その後のテストの勉強会の課題を見つけるためのグループワーク(SaPID)．

でもね，勉強会の結果「工数が増えるだけかもしれない，効果があるか分からない」という感想が出てきた時，
結局のところ，簡単に開発ができてテストもしなくても成果の出る『銀の弾丸』を求めてるんだなぁと感じ取ったわ．
んなもんあるわけねっつーの．

== 結局，何がいけなかったんだろう?

当時をふりかえってブランチを描いてみたら，様々な思い込みがあったことが判明しました．
思い込みのあるところって，因果関係のおかしな文章が多くて気持ち悪さしかないんだよね^^;;

=== 『テスト工数が少ない』という思い込み

「工数が少ないんだから，自動化して効率化しよう，テストを再利用しよう．」と思ってたけど，本当にテスト工数が少なかったのかな?
疑ってるわけじゃないよ?
でも，本人が切実に言ってたから信じていたけど本当にそうだったのかな?

==== 実は開発やテストの工数は十分に確保されている

十分な予算が確保されている，もしくは予算を気にしなくてもいいから，再利用や自動化をする必要がないんだろうな．
一方で，学習するための工数，新しいことをする工数は確保していない．
だから「工数が少ない」と言ってるのは『別のやり方でやる工数は想定していない』ってことなんだろう．

==== パーキンソンの法則に従う@<fn>{law}
//footnote[law][第1法則: 仕事の量は、完成のために与えられた時間をすべて満たすまで膨張する]

ケース1であったように，ボトルネックをカイゼンしてテスト工数を確保しても，ギリギリまで機能追加に使われた．
テストが苦手で興味がない人に，きっちりテストしてくれると期待してたのが悪かったのかなぁ・・・

『テストが苦手で興味がない』だったのかは，本当のところは分からない．
一方で，製品を完成するために，何をしなければいけないか?って事を，チームメンバーが認識していたのか分からない．
初めにも書いたけど，ソフトウェアのQA部門がなかったので，開発チームがテストもして動作保証しなければならない．
テストが苦手だろうが興味がなかろうが，それによってテスト工数が膨らもうが『仕事なんだからやるのが普通でしょ』って思うけどね．

=== 『正しいことなら，周りも行動してくれる』という思い込み

何かを変えようとする時は多かれ少なかれ抵抗が出る．
正しいことなら，みんなが動いてくれると思ったら大間違いだぜ．

TOCでは，抵抗心理を階層構造で表現している．

//listnum[6 Layers of Registance][TOC抵抗の6層]{
問題の存在に合意しない
ソリューションの方向性に合意しない
ソリューションの問題を解決できると思わない
ソリューションを実行するとマイナスの影響が生じる
ソリューションの実行を妨げる障害がある
その結果起こる，未知のことへの恐怖
//}

ほとんどの抵抗は第1層だと思った方がいいよ，これマジで．

例えば，ケース4のテストの勉強会で出た意見に照らし合わせると

 * 「ちゃんとテスト設計しても，今までより効果がでるとは思わない」(第3層)
 * 「ちゃんとテスト設計したら，工数がかかる」(第4層)

って，うまく当てはまってるっぽいけど，実は周りに忖度してるだけだからな!

本音は，

「自分なりに十分なテストをしているから，自分たちのやり方に問題はない（問題があるなら，他のところにあるはずだ）」(第1層)

って言いたいことに気づくべきなんだ．

もし，問題が存在していないと思ってるのに，カイゼンと称して何度もやり方を変えられたら迷惑だよね?
その結果，第1層の抵抗心理が大きくなってしまったら，最終的に近寄りたくない存在になっちゃうのかも．

あぁ，そうか・・・今振り返ると，離職前の自分ってそんな状態だったのか・・・(驚愕の事実判明)

== ここから，とってもエモく語る

これからも懲りずにカイゼンするなら，今度は，相手が『問題の存在に合意していないこと』を前提に行動したいなぁ．

カイゼン実施の判断は『問題の存在を合意するか』だけで決めてみようかなって．
もし相手が問題の存在に合意していないなら，そもそも効果のあるカイゼンにならないんじゃないかな?，と今は思ふ．

そのためには，どんな相手でも理解していくことが大事．
立場や状況で自分の理解の仕方が変わることに気を付けたい．

=== 同じ立場の開発者やテストエンジニアが抵抗している場合

その人にとっていかに良いカイゼンかを伝える前に，まずは，その人がなぜ抵抗しているのかを聞くことから始めたい．

話を聞いているうちに，自分の中で咀嚼できないことが出てくるかもしれない．
きっと，自分の思い込みが理解の邪魔をしていたり，『当然知っている』と思っている思い込みが相手にあるからかもしれない．

もし可能なら同じ作業を自分でやってみるといいね．できれば一緒にやるのがいいかも．
自分でやっているうちに，自分でないと感じない不便さ，ストレスを感じてくる．
実は，その不便さやストレスは，相手にとって普通のことだと思っていたかもしれない．
もしくは，実際にやってみたら，自分が思っていた問題とは違う，彼らの問題に気づくかもしれない．

そうやって一緒に作業した時の手順や起きた感情・ストレスを，ブランチに描いてみて相手と共有できれば，前に進むきっかけになるかもね．

=== 上司やステークホルダーが抵抗している場合

同じ立場の人とは違って，彼らに対してはもっと慎重に対応した方がいい．

上司が抵抗しているなら，無理してカイゼンしなくてもいいと思う．
しかし，そうも行かないのが社会人の常だ．
こっちが「(西川き〇しのマネしながら)小さな事からコツコツと!!」って提案してるのに，彼らは抜本的な変更を提案してくるんだ．
「そもそも，これが問題なのに，なぜやらないんだ?」とか言ってね．お前はあの時の俺か?

そんな時は，自分の提案内容と上司の意見，上司の抜本的な変更を，その場でブランチに描いてみるといい．
描いたブランチが論理的にしっくりこないなら，やる必要はないかもね．

でも，たいていの上司は「やらなきゃ分からないじゃないか?!」とか言ってくるんだ．
そんなこと言われたからって「やらなきゃ分からない事は，やってみても分からないですよ?」ってカウンターしたらダメですよ?
まずは落ち着いて!

意見が対立しているってことは，お互い達成したい目標が見えていない可能性があるかもしれない．
それなら，TOCfEのクラウドを使うとよいよ．
お互いの共通目標を見つけて，どちらがいいか考えてみよう．

これで偉い人対策も万全だ!!

いやいや，んなこたぁない．
残念だけど，自分の意見以外を認めない奴は多い．
そんな奴らは，カイゼンをしたいわけじゃなく，ただ自分の意見を通したいだけなんだ．

だとしたら，あえて彼らに従うのもアリだ．
TOCfEのアンビシャスターゲットツリー@<fn>{ATT}を作ってみると良い．
//footnote[ATT][ATTの事例は300 Multiple Choicesに寄稿しています]
せっかくなので，彼らの抜本的な変更を達成することで得られる目標(キ・レ・イ・ゴ・ト♡)を聞き出して，ATTを作って共有してみるといい．
手の届かない高嶺の花だったときは，それを目指そうと頑張ってたくせに，手が届くと分かった途端に興味なくなること請け合いだ!!

もし，そうじゃなかったとしても，カイゼンが進められたってことで，こっちの作戦勝ちなんだ．

=== まったくの赤の他人が抵抗している場合

えっと，貴方様は私と何の関係があるんでしょう?
どうして，私の意見に抵抗しているのでしょう?
とりあえず，それをブランチに描いてみましょうか．
貴方との話はそれからだ．

== さいごに

まず初めに・・・
正直，自分の過去の大反省文を，ここまで赤裸々に書くとは思わなかった(笑)．
そして，ここまで大きなブランチを描くのはしんどかった・・・お疲れ自分ｗ

うまくいかなかったことを因果関係に表すのは難しい．だって因果関係ないんだもん，そりゃ当然だ．
自分のことになると恨みつらみや思い込みが入ってしまい，出来上がったブランチはとても恥ずかしい．
何度もブランチを描きなおすことになって，〆切ギリギリまで書く内容が定まらなかったよ・・・

今回，JaSST'20 Tokyoのワークショップセッション「ステップアップしたいテストエンジニアのための思考トレーニング」を基礎編とするなら，その応用編として，自分のふりかえりをやってみました．
もし実際にやってみる場合は，こんな風に壮大にふりかえるのではなく，小さくふりかえるところから始めてみましょう．
今回の寄稿にちょいちょい入れたエピソードをブランチの練習に使ってみるといいよ(破綻してる文章がないといいなぁ)．
もし，TOCfEを体系的に理解したければNPO教育のためのTOC日本支部@<fn>{TOCfEPG}で開催している4日間の国際認定プログラムに参加するといいし，より実践的にツールの使い方を覚えたかったらTOCfE BootCamp@<fn>{TOCfEBC}に参加するといいと思うよ．
//footnote[TOCfEPG][http://tocforeducation.org/]
//footnote[TOCfEBC][https://tocfebc.doorkeeper.jp/]

今回，前職での「カイゼンしなかったジャーニー」をふりかえり，形にすることができてよかった．
これで，次の「カイゼンしたいジャーニー」に向かうことができそうです．
少なからずみなさんの参考になればいいなぁと思います．
また，自分もまだまだ試行錯誤しているので「こうしたらいいよ」って意見があればぜひ教えてください．

最後に，自分の赤裸々告白を堅苦しく書くとつまらなくなりそうだったので，あえて口語体で砕けた表現にしてみました．
見苦しい文章だったこと深くお詫びいたしますm(_ _)m
