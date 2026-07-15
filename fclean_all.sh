#!/bin/bash
# CPP01 内のすべての ex ディレクトリで make fclean を実行する

# スクリプトのあるディレクトリへ移動
cd "$(dirname "$0")" || exit 1

for dir in ex*/; do
	if [ -f "$dir/Makefile" ]; then
		echo "==> make fclean in $dir"
		make -C "$dir" fclean
	fi
done
