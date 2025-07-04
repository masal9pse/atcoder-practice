read n
read t
read a

for((i=0;i<n;i++));do
  if [ "${t:$i:1}" == "o" ] && [ "${a:$i:1}" == "o" ]; then
    echo "Yes"
    exit 0
  fi
done

echo "No"