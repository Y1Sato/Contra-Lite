# Contra-Lite（魂斗羅 簡易復刻版）

本プロジェクトは、KONAMIの名作アクションゲーム『魂斗羅』（Contra）のコアな遊びを現代C言語でシンプルに再現したオープンソース実装です。ゲーム開発学習やレトロゲーム復刻、組み込み/エミュレータ開発の教材としてご利用いただけます。

## 🎮 ゲーム内容
- 横スクロールアクションシューティング
- プレイヤーの移動・ジャンプ・射撃
- シンプルな敵AIとステージ構造
- 拡張・学習しやすい簡易ドット絵素材

## 🏗️ ディレクトリ構成
```
Contra-Lite/
├── src/           # ソースコード（main.c, player.c, enemy.c, stage.c など）
├── assets/        # 素材（画像・効果音など、オリジナルまたはフリー素材）
├── include/       # ヘッダファイル
├── README.md      # プロジェクト説明
├── LICENSE        # ライセンス
├── .gitignore     # Git無視ファイル定義
└── Makefile       # ビルドスクリプト（任意）
```

## 🚀 ビルド＆実行方法

gccまたはclangなどのCコンパイラがインストールされている前提です。

```bash
git clone https://github.com/Y1Sato/Contra-Lite.git
cd Contra-Lite
make
./contra-lite
```

※ 現状、簡易デモ版のためコマンドライン/SDLウィンドウで動作します。今後、拡張・移植の余地あり。

## 🤝 コントリビューション

バグ報告、機能追加、グラフィック・サウンド・ステージ拡張など、Pull RequestやIssueでのご協力を歓迎します。詳しくは[CONTRIBUTING.md](CONTRIBUTING.md)をご参照ください。

## ⚠️ 注意・謝辞

本プロジェクトは学習・研究目的の非公式ファンリメイクであり、KONAMI社の公式作品ではありません。キャラクター・商標等は各権利所有者に帰属します。商用利用はご遠慮ください。

---

## 📚 参考リソース

- [魂斗羅 FC 逆アセンブル解析（GitHub）](https://github.com/ruanyf/contra)
- [NESDev Wiki（英語）](https://wiki.nesdev.com/)
- [レトロゲーム復刻チュートリアル（日本語・動画サイト等）](https://www.bilibili.com/)

---
