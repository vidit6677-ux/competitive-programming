# Moves solved problems from the CP root into platform folders,
# based on the problem URL that CPH saved in .cph/*.prob
import json, os, shutil

root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
platforms = {"codeforces.com": "Codeforces", "atcoder.jp": "AtCoder", "codechef.com": "CodeChef"}

cph = os.path.join(root, ".cph")
files = os.listdir(cph) if os.path.isdir(cph) else []
for prob in [os.path.join(cph, f) for f in files if f.endswith(".prob")]:
    try:
        d = json.load(open(prob))
    except Exception:
        continue
    name = os.path.basename(d.get("srcPath", ""))
    src = os.path.join(root, name)
    if not name or name == "main.cpp" or not os.path.isfile(src):
        continue
    url = d.get("url", "")
    folder = next((f for k, f in platforms.items() if k in url), "Others")
    os.makedirs(os.path.join(root, folder), exist_ok=True)
    dest = os.path.join(root, folder, name)
    if os.path.exists(dest):
        print("skip (already exists):", folder + "/" + name)
        continue
    shutil.move(src, dest)
    os.remove(prob)
    binf = os.path.splitext(src)[0] + ".bin"
    if os.path.exists(binf):
        os.remove(binf)
    print("moved", name, "->", folder)
