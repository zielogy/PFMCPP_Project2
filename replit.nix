{ pkgs }: {
	deps = [
		pkgs.gotools
  pkgs.fetchutils
  pkgs.run
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}